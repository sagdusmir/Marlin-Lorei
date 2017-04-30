/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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

/**
 * XMachines Custom Controller 1.0 – Arduino Mega2560 with modified 
 * RAMPS v1.4 pin assignments
 *
 */

#define BOARD_NMAE "XMachines"

#include "pins_RAMPS.h"

#undef 	Z_MIN_PIN
#define Z_MIN_PIN          12  

#if ENABLED(Z_MIN_PROBE_ENDSTOP)
  // Define a pin to use as the signal pin on Arduino for the Z_PROBE endstop.
  #undef  Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  12  
#endif

#undef  FAN_PIN
#define FAN_PIN           43 
#define FAN1_PIN          42  ////Use P1 to turn on

#undef  PS_ON_PIN
//#define PS_ON_PIN         -1

#undef  HEATER_1_PIN
#define HEATER_1_PIN      7   // EXTRUDER 2 (FAN On Sprinter)

#undef  HEATER_BED_PIN
#define HEATER_BED_PIN    8



