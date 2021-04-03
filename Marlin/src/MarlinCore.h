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
#pragma once

#include "inc/MarlinConfig.h"

#ifdef DEBUG_GCODE_PARSER
  #include "gcode/parser.h"
#endif

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#if HAS_L64XX
  #include "libs/L64XX/L64XX_Marlin.h"
  extern uint8_t axis_known_position;
#endif

void stop();

void idle(
  #if ENABLED(ADVANCED_PAUSE_FEATURE)
    bool no_stepper_sleep=false    // Pass true to keep steppers from timing out
  #endif
);

inline void idle_no_sleep() {
  idle(
    #if ENABLED(ADVANCED_PAUSE_FEATURE)
      true
    #endif
  );
}

#if ENABLED(EXPERIMENTAL_I2CBUS)
  #include "feature/twibus.h"
  extern TWIBus i2c;
#endif

#if ENABLED(G38_PROBE_TARGET)
  extern uint8_t G38_move;          // Flag to tell the ISR that G38 is in progress, and the type
  extern bool G38_did_trigger;      // Flag from the ISR to indicate the endstop changed
#endif

/**
 * The axis order in all axis related arrays is X, Y, Z, E
 */
void enable_e_steppers();
void enable_all_steppers();
void disable_e_stepper(const uint8_t e);
void disable_e_steppers();
void disable_all_steppers();

void kill(PGM_P const lcd_error=nullptr, PGM_P const lcd_component=nullptr, const bool steppers_off=false);
void minkill(const bool steppers_off=false);

void waitkill(const char* msg);


void quickstop_stepper();

// Global State of the firmware
enum MarlinState : uint8_t {
  MF_INITIALIZING =  0,
  MF_RUNNING      = _BV(0),
  MF_PAUSED       = _BV(1),
  MF_WAITING      = _BV(2),
  MF_STOPPED      = _BV(3),
  MF_KILLED       = _BV(7)
};

extern MarlinState marlin_state;
inline bool IsRunning() { return marlin_state == MF_RUNNING; }
inline bool IsStopped() { return marlin_state != MF_RUNNING; }

bool printingIsActive();
bool printingIsPaused();
void startOrResumeJob();

extern bool wait_for_heatup;

#if HAS_RESUME_CONTINUE
  extern bool wait_for_user;
#endif

// Inactivity shutdown timer
extern millis_t max_inactive_time, stepper_inactive_time;

#if ENABLED(USE_CONTROLLER_FAN)
  extern uint8_t controllerfan_speed;
#endif

#if ENABLED(PSU_CONTROL)
  extern bool powersupply_on;
  #define PSU_PIN_ON()  do{ OUT_WRITE(PS_ON_PIN,  PSU_ACTIVE_HIGH); powersupply_on = true; }while(0)
  #define PSU_PIN_OFF() do{ OUT_WRITE(PS_ON_PIN, !PSU_ACTIVE_HIGH); powersupply_on = false; }while(0)
  #if ENABLED(AUTO_POWER_CONTROL)
    #define PSU_ON()  powerManager.power_on()
    #define PSU_OFF() powerManager.power_off()
  #else
    #define PSU_ON()  PSU_PIN_ON()
    #define PSU_OFF() PSU_PIN_OFF()
  #endif
#endif

bool pin_is_protected(const pin_t pin);
void protected_pin_err();

#if HAS_SUICIDE
  inline void suicide() { OUT_WRITE(SUICIDE_PIN, SUICIDE_PIN_INVERTING); }
#endif

#if ENABLED(G29_RETRY_AND_RECOVER)
  void event_probe_recover();
  void event_probe_failure();
#endif

extern const char NUL_STR[], M112_KILL_STR[], G28_STR[], M21_STR[], M23_STR[], M24_STR[],
                  SP_P_STR[], SP_T_STR[], SP_X_STR[], SP_Y_STR[], SP_Z_STR[], SP_E_STR[],
                  X_LBL[], Y_LBL[], Z_LBL[], E_LBL[], SP_X_LBL[], SP_Y_LBL[], SP_Z_LBL[], SP_E_LBL[];

                  // perron add define
#define LANGUAGE_EN		0
#define LANGUAGE_CN		1
#define LANGUAGE_FR		2
#define LANGUAGE_DE		3
#define LANGUAGE_ES		4
#define LANGUAGE_IT		5
#define LANGUAGE_KANA	6
#define LANGUAGE_PT		7
#define LANGUAGE_NL		8
#define LANGUAGE_RU		9
#define LANGUAGE_TR		10


// perron add var
extern uint8_t wtvar_showWelcome;
extern uint8_t wtvar_gohome;
extern uint8_t wtvar_goDebugMenu;
extern uint8_t wtvar_language;
extern uint8_t wtvar_enablefilamentruncout;
extern uint8_t wtvar_enablepoweroff;
extern uint8_t wtvar_enableselftest;
extern uint8_t wtvar_counter;
extern bool wtvar_uart0_binmode;
extern uint8_t wt_onlineprinting;
extern uint8_t wtvar_tune_x1;
extern uint8_t wtvar_tune_x2;
extern uint8_t wtvar_tune_y;
extern uint8_t wtvar_runout;
extern uint8_t wtvar_wifi_type;
extern bool readykill;

#ifdef DGUS_LCD

typedef struct TOUCHPARA
{
	unsigned int address;
    unsigned int value;
    bool validflg;	
}TouchPara;

extern uint32_t getcurrenttime();
extern  uint32_t nowtime;
extern int progressvalue;
#endif


