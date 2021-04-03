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

#include "../../inc/MarlinConfig.h"

#if FAN_COUNT > 0

#include "../gcode.h"
#include "../../module/motion.h"
#include "../../module/temperature.h"

#if ENABLED(SINGLENOZZLE)
  #define _ALT_P active_extruder
  #define _CNT_P EXTRUDERS
#else
  #define _ALT_P _MIN(active_extruder, FAN_COUNT - 1)
  #define _CNT_P FAN_COUNT
#endif

/**
 * M106: Set Fan Speed
 *
 *  S<int>   Speed between 0-255
 *  P<index> Fan index, if more than one fan
 *
 * With EXTRA_FAN_SPEED enabled:
 *
 *  T<int>   Restore/Use/Set Temporary Speed:
 *           1     = Restore previous speed after T2
 *           2     = Use temporary speed set with T3-255
 *           3-255 = Set the speed for use with T2
 */
void GcodeSuite::M106() {
  const uint8_t p = parser.byteval('P', _ALT_P);

  if (p < _CNT_P) {

    #if ENABLED(EXTRA_FAN_SPEED)
      const uint16_t t = parser.intval('T');
      if (t > 0) return thermalManager.set_temp_fan_speed(p, t);
    #endif
    uint16_t d = parser.seen('A') ? thermalManager.fan_speed[active_extruder] : 255;
    uint16_t s = parser.ushortval('S', d);
    NOMORE(s, 255U);

    thermalManager.set_fan_speed(p, s);

    // perron add, 200806, 修正在复制和镜像模式右喷头风扇不转的问题
    #if ENABLED(DUAL_X_CARRIAGE) && (dual_x_carriage_mode == DXC_DUPLICATION_MODE || dual_x_carriage_mode == DXC_MIRRORED_MODE)
        if (p == 0)
            thermalManager.set_fan_speed(1, s);
    #endif
  }
}

/**
 * M107: Fan Off
 */
void GcodeSuite::M107() {
  const uint8_t p = parser.byteval('P', _ALT_P);
  thermalManager.set_fan_speed(p, 0);
}

#endif // FAN_COUNT > 0
