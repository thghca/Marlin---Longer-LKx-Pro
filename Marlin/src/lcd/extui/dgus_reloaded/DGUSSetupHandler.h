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

namespace DGUSSetupHandler {

  #if ENABLED(SDSUPPORT)
    bool Print();
  #endif
  bool PrintStatus();
  bool PrintAdjust();
  bool LevelingManual();
#if HAS_LEVELING
  bool LevelingMenu();
  bool LevelingOffset();
  bool LevelingAutomatic();
  bool LevelingProbing();
#endif
  bool Filament();
  bool Move();
  bool Gcode();
  bool PID();
  bool Infos();

}