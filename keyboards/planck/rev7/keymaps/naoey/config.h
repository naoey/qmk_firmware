/* Copyright 2015-2023 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define MOUSEKEY_INERTIA

#define MOUSEKEY_DELAY 10       // Delay between pressing a movement key and cursor movement
#define MOUSEKEY_INTERVAL 8    // Time between cursor movements in milliseconds(16 = 60fps)
#define MOUSEKEY_MAX_SPEED 32   // Maximum cursor speed at which acceleration stops
#define MOUSEKEY_TIME_TO_MAX 64 // Number of frames until maximum cursor speed is reached
#define MOUSEKEY_FRICTION 24    // How quickly the cursor stops after releasing a key
#define MOUSEKEY_MOVE_DELTA 2
