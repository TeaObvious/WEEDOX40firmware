/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "../inc/MarlinConfigPre.h"

#include "tool_change.h"

#include "probe.h"
#include "motion.h"
#include "../module/planner.h"
#include "../module/temperature.h"

#include "../MarlinCore.h"

#define DEBUG_OUT ENABLED(DEBUG_LEVELING_FEATURE)
#include "../core/debug_out.h"

toolchange_settings_t toolchange_settings; // Initialized by settings.load()

#if HAS_LEVELING
#include "../feature/bedlevel/bedlevel.h"
#endif

#if ENABLED(ADVANCED_PAUSE_FEATURE)
#include "../feature/pause.h"
#endif

#if HAS_FILAMENT_SENSOR
#include "../feature/runout.h"
#endif

inline void _line_to_current(const AxisEnum fr_axis, const float fscale = 1)
{
    line_to_current_position(planner.settings.max_feedrate_mm_s[fr_axis] * fscale);
}
inline void slow_line_to_current(const AxisEnum fr_axis) { _line_to_current(fr_axis, 0.5f); }
inline void fast_line_to_current(const AxisEnum fr_axis) { _line_to_current(fr_axis); }

inline void invalid_extruder_error(const uint8_t e)
{
    SERIAL_ECHO_START();
    SERIAL_CHAR('T');
    SERIAL_ECHO(int(e));
    SERIAL_CHAR(' ');
    SERIAL_ECHOLNPGM(STR_INVALID_EXTRUDER);
}

inline void dualx_tool_change(const uint8_t new_tool, bool &no_move)
{
    if (DEBUGGING(LEVELING))
    {
        DEBUG_ECHOPGM("Dual X Carriage Mode ");
        switch (dual_x_carriage_mode)
        {
        case DXC_FULL_CONTROL_MODE:
            DEBUG_ECHOLNPGM("FULL_CONTROL");
            break;
        case DXC_AUTO_PARK_MODE:
            DEBUG_ECHOLNPGM("AUTO_PARK");
            break;
        case DXC_DUPLICATION_MODE:
            DEBUG_ECHOLNPGM("DUPLICATION");
            break;
        case DXC_MIRRORED_MODE:
            DEBUG_ECHOLNPGM("MIRRORED");
            break;
        }
    }

    const float xhome = x_home_pos(active_extruder);
    if (dual_x_carriage_mode == DXC_AUTO_PARK_MODE && IsRunning() && !no_move && (delayed_move_time || current_position.x != xhome))
    {

        if (DEBUGGING(LEVELING))
            DEBUG_ECHOLNPAIR("MoveX to ", xhome);

        // Park old head
        current_position.x = xhome;
        line_to_current_position(planner.settings.max_feedrate_mm_s[X_AXIS]);
        planner.synchronize();
    }

    // Activate the new extruder ahead of calling set_axis_is_at_home!
    active_extruder = new_tool;

    // This function resets the max/min values - the current position may be overwritten below.
    set_axis_is_at_home(X_AXIS);

    if (DEBUGGING(LEVELING))
        DEBUG_POS("New Extruder", current_position);

    switch (dual_x_carriage_mode)
    {
    case DXC_FULL_CONTROL_MODE:
        // New current position is the position of the activated extruder
        current_position.x = inactive_extruder_x_pos;
        // Save the inactive extruder's position (from the old current_position)
        inactive_extruder_x_pos = destination.x;
        break;
    case DXC_AUTO_PARK_MODE:
        // record current raised toolhead position for use by unpark
        raised_parked_position = current_position;
        active_extruder_parked = true;
        delayed_move_time = 0;
        break;
    default:
        break;
    }

    if (DEBUGGING(LEVELING))
    {
        DEBUG_ECHOLNPAIR("Active extruder parked: ", active_extruder_parked ? "yes" : "no");
        DEBUG_POS("New extruder (parked)", current_position);
    }
}

/**
 * Perform a tool-change, which may result in moving the
 * previous tool out of the way and the new tool into place.
 */
void tool_change(const uint8_t new_tool, bool no_move /*=false*/)
{
    planner.synchronize();

    #if HAS_FILAMENT_SENSOR
    runout.enabled = false;
    #endif

#if ENABLED(DUAL_X_CARRIAGE) // Only T0 allowed if the Printer is in DXC_DUPLICATION_MODE or DXC_MIRRORED_MODE
    if (new_tool != 0 && dxc_is_duplicating())
        return invalid_extruder_error(new_tool);
#endif

    if (new_tool >= EXTRUDERS)
        return invalid_extruder_error(new_tool);

    if (!no_move && !all_axes_homed())
    {
        no_move = true;
        if (DEBUGGING(LEVELING))
            DEBUG_ECHOLNPGM("No move (not homed)");
    }

    const bool idex_full_control = dual_x_carriage_mode == DXC_FULL_CONTROL_MODE;

    const uint8_t old_tool = active_extruder;
    const bool can_move_away = !no_move && !idex_full_control;
    const float oldE = current_position.e;     

#if ENABLED(TOOLCHANGE_FILAMENT_SWAP)
    const bool should_swap = can_move_away && toolchange_settings.swap_length;
#if ENABLED(PREVENT_COLD_EXTRUSION)
    const bool too_cold = !DEBUGGING(DRYRUN) && (thermalManager.targetTooColdToExtrude(old_tool) || thermalManager.targetTooColdToExtrude(new_tool));
#else
    constexpr bool too_cold = false;
#endif
    if (should_swap)
    {
        if (too_cold)
        {
            SERIAL_ECHO_MSG(STR_ERR_HOTEND_TOO_COLD);
#if ENABLED(SINGLENOZZLE)
            active_extruder = new_tool;
            return;
#endif
        }
        else
        {
#if ENABLED(ADVANCED_PAUSE_FEATURE)
            do_pause_e_move(-toolchange_settings.swap_length, MMM_TO_MMS(toolchange_settings.retract_speed));
#else
            current_position.e -= toolchange_settings.swap_length / planner.e_factor[old_tool];
            planner.buffer_line(current_position, MMM_TO_MMS(toolchange_settings.retract_speed), old_tool);
            planner.synchronize();
#endif
        }
    }
#endif // TOOLCHANGE_FILAMENT_SWAP

#if HAS_LEVELING && DISABLED(SINGLENOZZLE)
    // Set current position to the physical position
    TEMPORARY_BED_LEVELING_STATE(false);
#endif

    if (new_tool != old_tool)
    {

        REMEMBER(fr, feedrate_mm_s, XY_PROBE_FEEDRATE_MM_S);

#if HAS_SOFTWARE_ENDSTOPS
#if HAS_HOTEND_OFFSET
#define _EXT_ARGS , old_tool, new_tool
#else
#define _EXT_ARGS
#endif
        update_software_endstops(X_AXIS _EXT_ARGS);
#if DISABLED(DUAL_X_CARRIAGE)
        update_software_endstops(Y_AXIS _EXT_ARGS);
        update_software_endstops(Z_AXIS _EXT_ARGS);
#endif
#endif

        xyz_pos_t diff = hotend_offset[new_tool] - hotend_offset[old_tool];
        diff.x = 0;

        dualx_tool_change(new_tool, no_move);

        // The newly-selected extruder XYZ is actually at...
        if (DEBUGGING(LEVELING))
            DEBUG_ECHOLNPAIR("Offset Tool XYZ by { ", diff.x, ", ", diff.y, ", ", diff.z, " }");
        current_position += diff;

        // Tell the planner the new "current position"
        sync_plan_position();

        // Return to position and lower again
        if (!no_move && IsRunning())
        {
            if (should_swap && !too_cold && (toolchange_settings.x40_toolchange_config & 1))
            {
                do_pause_e_move(toolchange_settings.swap_length, MMM_TO_MMS(toolchange_settings.prime_speed));
                do_pause_e_move(toolchange_settings.extra_prime, 6);
                do_pause_e_move(-TOOLCHANGE_FIL_RETRACT_LENGTH, 6);
                planner.synchronize();

           }

            // Prevent a move outside physical bounds
            apply_motion_limits(destination);

            // Should the nozzle move back to the old position?
            if (can_move_away && (toolchange_settings.x40_toolchange_config & 1))
            {
                if (new_tool == 0)
                {   
                    if (toolchange_settings.x40_toolchange_config & 2)
                    {
                      do_blocking_move_to_x(-10, 100);
                      do_blocking_move_to_x(-45, 100);
                      do_blocking_move_to_x(-10, 100);
                      do_blocking_move_to_x(-45, 100);
                      do_blocking_move_to_x(-15, 100);
                      do_blocking_move_to_x(-45, 100);
                    }
                    do_blocking_move_to_x(-30, 50);
                }
                else
                {   
                    if (toolchange_settings.x40_toolchange_config & 2)
                    {
                      do_blocking_move_to_x(315, 100);
                      do_blocking_move_to_x(345, 100);
                      do_blocking_move_to_x(315, 100);
                      do_blocking_move_to_x(345, 100);
                      do_blocking_move_to_x(315, 100);
                      do_blocking_move_to_x(345, 100);
                    }
                    do_blocking_move_to_x(330, 50);
                }

                if (DEBUGGING(LEVELING))
                    DEBUG_POS("Move back", destination);
                // Legodev: should not be needed, at least with cura and can cause trouble
                //do_blocking_move_to(destination, planner.settings.max_feedrate_mm_s[X_AXIS]);

                if (!wtvar_changing_tool)
                {
                    planner.set_e_position_mm((destination.e = current_position.e = current_position.e - TOOLCHANGE_FIL_EXTRA_PRIME - TOOLCHANGE_FIL_RETRACT_LENGTH));
                }
                else
                {
                    planner.set_e_position_mm((destination.e = current_position.e = oldE - TOOLCHANGE_FIL_RETRACT_LENGTH));
                    wtvar_changing_tool = false;
                }
            }
            else if (DEBUGGING(LEVELING))
                DEBUG_ECHOLNPGM("Move back skipped");

            active_extruder_parked = false;

        }

    } // (new_tool != old_tool)

    planner.synchronize();

    #if HAS_FILAMENT_SENSOR
    runout.enabled = wtvar_enablefilamentruncout;
    #endif

    SERIAL_ECHO_START();
    SERIAL_ECHOLNPAIR(STR_ACTIVE_EXTRUDER, int(active_extruder));
}
