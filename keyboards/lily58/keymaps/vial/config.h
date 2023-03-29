/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* VIAL UID for Lily58*/
#define VIAL_KEYBOARD_UID {0x61, 0xBD, 0xC7, 0x11, 0xD7, 0x4A, 0xCE, 0x54}

/* VIAL secure unlock keystroke - currently both big keys (typ. SPACE/ENTER) */
#define VIAL_UNLOCK_COMBO_ROWS {4, 9}
#define VIAL_UNLOCK_COMBO_COLS {4, 4}

/* Space reduction */

#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#define VIAL_TAP_DANCE_ENTRIES 4
#define VIAL_COMBO_ENTRIES 4
#define VIAL_KEY_OVERRIDE_ENTRIES 4
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 100

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
#define VIALRGB_NO_DIRECT

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 12
#define RGBLIGHT_SPLIT { 12, 12 }
// The LEDs on the slave half go in reverse order
#define RGBLIGHT_LED_MAP { 0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12}