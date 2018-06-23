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

#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

/* USB Device descriptor parameter */
#undef MANUFACTURER
#define MANUFACTURER    HalfDane
#undef PRODUCT
#define PRODUCT         Scylla And Charybdis

/* Use I2C or Serial, not both */

// #define USE_SERIAL
#define USE_I2C


/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

/* key matrix size */
// Rows are doubled-up
#undef MATRIX_ROWS
#define MATRIX_ROWS 10
#undef MATRIX_COLS
#define MATRIX_COLS 7

// wiring of each half
#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS { D4, C6, D7, E6, B4 }
#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2 }

// Used to create a keymap using only KC_ prefixed keys
#define KEYMAP_kc( \
    L00, L01, L02, L03, L04, L05,           R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15,           R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25,           R20, R21, R22, R23, R24, R25, \
    L30, L31, L32, L33, L34, L35, L36, R36, R30, R31, R32, R33, R34, R35, \
    L40, L41, L42, L43, L44, L45, L46, R46, R40, R41, R42, R43, R44, R45 \
      ) \
      KEYMAP( \
          KC_##L00, KC_##L01, KC_##L02, KC_##L03, KC_##L04, KC_##L05, KC_NO,    KC_##R00, KC_##R01, KC_##R02, KC_##R03, KC_##R04, KC_##R05, KC_NO,\
          KC_##L10, KC_##L11, KC_##L12, KC_##L13, KC_##L14, KC_##L15, KC_NO,    KC_##R10, KC_##R11, KC_##R12, KC_##R13, KC_##R14, KC_##R15, KC_NO,\
          KC_##L20, KC_##L21, KC_##L22, KC_##L23, KC_##L24, KC_##L25, KC_NO,    KC_##R20, KC_##R21, KC_##R22, KC_##R23, KC_##R24, KC_##R25, KC_NO,\
          KC_##L30, KC_##L31, KC_##L32, KC_##L33, KC_##L34, KC_##L35, KC_##L36, KC_##R30, KC_##R31, KC_##R32, KC_##R33, KC_##R34, KC_##R35, KC_##R36,\
          KC_##L40, KC_##L41, KC_##L42, KC_##L43, KC_##L44, KC_##L45, KC_##L46, KC_##R40, KC_##R41, KC_##R42, KC_##R43, KC_##R44, KC_##R45, KC_##R45 \
    )

#ifndef FLIP_HALF
// Standard Keymap
// (TRRS jack on the left half is to the right, TRRS jack on the right half is to the left)
#define KEYMAP( \
    L00, L01, L02, L03, L04, L05,           R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15,           R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25,           R20, R21, R22, R23, R24, R25, \
    L30, L31, L32, L33, L34, L35, L36, R36, R30, R31, R32, R33, R34, R35, \
    L40, L41, L42, L43, L44, L45, L46, R46, R40, R41, R42, R43, R44, R45 \
    ) \
    { \
      { L00, L01, L02, L03, L04, L05, KC_NO }, \
      { L10, L11, L12, L13, L14, L15, KC_NO }, \
      { L20, L21, L22, L23, L24, L25, KC_NO }, \
      { L30, L31, L32, L33, L34, L35, L36 }, \
      { L40, L41, L42, L43, L44, L45, L46 }, \
      { R05, R04, R03, R02, R01, R00, KC_NO }, \
      { R15, R14, R13, R12, R11, R10, KC_NO }, \
      { R25, R24, R23, R22, R21, R20, KC_NO }, \
      { R35, R34, R33, R32, R31, R30, R36 }, \
      { R45, R44, R43, R42, R41, R40, R46 } \
    }
#else
// Keymap with right side flipped
// (TRRS jack on both halves are to the right)
#define KEYMAP( \
  L00, L01, L02, L03, L04, L05,           R00, R01, R02, R03, R04, R05, \
  L10, L11, L12, L13, L14, L15,           R10, R11, R12, R13, R14, R15, \
  L20, L21, L22, L23, L24, L25,           R20, R21, R22, R23, R24, R25, \
  L30, L31, L32, L33, L34, L35, L36, R36, R30, R31, R32, R33, R34, R35, \
  L40, L41, L42, L43, L44, L45, L46, R46, R40, R41, R42, R43, R44, R45 \
  ) \
  { \
    { L00, L01, L02, L03, L04, L05, KC_NO }, \
    { L10, L11, L12, L13, L14, L15, KC_NO }, \
    { L20, L21, L22, L23, L24, L25, KC_NO }, \
    { L30, L31, L32, L33, L34, L35, L36 }, \
    { L40, L41, L42, L43, L44, L45, L46 }, \
    { KC_NO, R00, R01, R02, R03, R04, R05 }, \
    { KC_NO, R10, R11, R12, R13, R14, R15 }, \
    { KC_NO, R20, R21, R22, R23, R24, R25 }, \
    { R36, R30, R31, R32, R33, R34, R35 }, \
    { R46, R40, R41, R42, R43, R44, R45 } \
  }
#endif

#endif
