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

// Mouse configuration

#define MOUSEKEY_INERTIA

#define MOUSEKEY_DELAY 0         // Instant launch with zero pre-travel lag
#define MOUSEKEY_INTERVAL 8      // 8ms aligns perfectly with a standard 125Hz USB poll rate
#define MOUSEKEY_MOVE_DELTA 1    // Allows 1-pixel steps on quick taps so you can hit UI buttons perfectly
#define MOUSEKEY_MAX_SPEED 16    // Fast enough to sweep across a 4K monitor, but completely controllable
#define MOUSEKEY_TIME_TO_MAX 22  // Halved from before. Hits top speed in ~175ms for a very aggressive, snappy launch
#define MOUSEKEY_FRICTION 38     // Higher friction gives the cursor tactile "weight" and drops the anchors fast when you let go

#define MOUSEKEY_WHEEL_DELAY 0         // Instant scroll response upon keypress
#define MOUSEKEY_WHEEL_INTERVAL 30     // Cut in half (from 60). More frequent updates mean much smoother scrolling
#define MOUSEKEY_WHEEL_MAX_SPEED 8     // Clean, fast top speed without overshooting pages
#define MOUSEKEY_WHEEL_TIME_TO_MAX 6   // Reaches top speed in 180ms (6 frames * 30ms)
