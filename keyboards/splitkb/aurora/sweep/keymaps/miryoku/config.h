/* Copyright 2022 splitkb.com <support@splitkb.com>
 * Copyright 2023 Terrence Lam  (@skyuplam) <skyuplam@gmail.com>
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

// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 200

// reduce amount to avoid accidentally trigger unwanted auto-repeat
// see https://precondition.github.io/home-row-mods#quick-tap-term
#define QUICK_TAP_TERM 150

#define PERMISSIVE_HOLD

#undef HOLD_ON_OTHER_KEY_PRESS

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY 0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 64

#define COMBO_COUNT 8
// `COMBO_TERM` must be lesser than the `QUICK_TAP_TERM` in to for the auto-repeat working properly
#define COMBO_TERM 50
#define EXTRA_SHORT_COMBOS

// RGB Matrix https://docs.qmk.fm/#/feature_rgb_matrix?id=ws2812
// The pin connected to the data pin of the LEDs
#define WS2812_DI_PIN D3
#define SPLIT_LAYER_STATE_ENABLE

// Not yet available in `keymap.json` format
#ifdef RGB_MATRIX_ENABLE
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_KEYPRESSES
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    define ENABLE_RGB_MATRIX_SOLID_SPLASH
#    define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#endif

// Not yet available in `keymap.json` format
#ifdef MOUSEKEY_ENABLE
// The default is 100
#    define MOUSEKEY_WHEEL_INTERVAL 50
// The default is 40
#    define MOUSEKEY_WHEEL_TIME_TO_MAX 100
#endif
