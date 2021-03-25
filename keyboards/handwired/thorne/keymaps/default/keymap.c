#include QMK_KEYBOARD_H

#define __ KC_NO

#define U_RDO C(KC_Y)
#define U_PST C(KC_V)
#define U_CPY C(KC_C)
#define U_CUT C(KC_X)
#define U_UND C(KC_Z)

#define A_ LALT_T
#define G_ LGUI_T
#define C_ LCTL_T
#define S_ LSFT_T
#define GR_ ALGR_T

#define RE RESET

enum layers { COLEMAK, QWERTY, MBO, MEDR, NAVR, MOUR, NSSL, NSL, FUNL };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[COLEMAK] = LAYOUT(
     KC_Q,     KC_W,      KC_F,     KC_P,     KC_B,         KC_J, KC_L,     KC_U,      KC_Y,        KC_QUOTE,
     G_(KC_A), A_(KC_R),  C_(KC_S), S_(KC_T), KC_G,         KC_M, S_(KC_N), C_(KC_E),  A_(KC_I),    G_(KC_O),
     KC_Z,     GR_(KC_X), KC_C,     KC_D,     KC_V,         KC_K, KC_H,     KC_COMM,   GR_(KC_DOT), KC_SLSH,
                             LT(MEDR, KC_ESC),                  LT(FUNL, KC_DEL),
                                LT(NAVR, KC_SPC),           LT(NSL, KC_BSPC),
                                      LT(MOUR, KC_TAB), LT(NSSL, KC_ENT)
  ),

[QWERTY] = LAYOUT(
     KC_Q,     KC_W,      KC_E,     KC_R,     KC_T,         KC_Y, KC_U,     KC_I,      KC_O,        KC_P,
     G_(KC_A), A_(KC_S),  C_(KC_D), S_(KC_F), KC_G,         KC_H, S_(KC_J), C_(KC_K),  A_(KC_L),    G_(KC_QUOT),
     KC_Z,     GR_(KC_X), KC_C,     KC_V,     KC_B,         KC_N, KC_M,     KC_COMM,   GR_(KC_DOT), KC_SLSH,
                             LT(MEDR, KC_ESC),                  LT(FUNL, KC_DEL),
                                LT(NAVR, KC_SPC),           LT(NSL, KC_BSPC),
                                      LT(MOUR, KC_TAB), LT(NSSL, KC_ENT)
  ),

[NAVR] = LAYOUT(
     RESET,   __,      __,      DF(QWERTY), __,              U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
     KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, __,                 KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
     KC_ALGR, U_CUT,   U_CPY,   U_PST,   __,                 KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
                                __,                                   KC_DEL,
                                         __,                 KC_BSPC,
                                              KC_BSPC,  KC_ENT
  ),

[MOUR] = LAYOUT(
     RESET,   __,       __,     __,      __,                __,   __,       __,     __,      __,
     KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, __,                __,   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
     KC_ALGR, __,      __,      __,      __,                __,   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
                                __,                               KC_BTN2,
                                         __,                KC_BTN3,
                                              __,       KC_BTN1
  ),

[MEDR] = LAYOUT(
     RESET,   __,       __,     __,      __,                __,   __,       __,     __,      __,
     KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, __,                __,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
     KC_ALGR, __,      __,      __,      __,                __,   __,       __,     __,      __,
                                __,                               KC_MUTE,
                                         __,                KC_MPLY,
                                              __,       KC_MSTP
  ),

[FUNL] = LAYOUT(
     KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR,                  __, __,      __,      __,      RESET,
     KC_F11, KC_F4, KC_F5, KC_F6, KC_SLCK,                  __, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
     KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS,                  __, __,      __,      __,      KC_ALGR,
                           KC_APP,                              __,
                                  KC_SPC,                   __,``
                                           KC_TAB,      __
  ),

[NSL] = LAYOUT(
     KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC,               __, DF(COLEMAK), __,  __,      RESET,
     KC_SCLN, KC_4, KC_5, KC_6, KC_EQL,                __, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
     KC_GRV,  KC_1, KC_2, KC_3, KC_BSLS,               __, __,      __,      __,      KC_ALGR,
                           KC_DOT,                         __,
                                  KC_0,                __,
                                        KC_MINS,   __
  ),

[NSSL] = LAYOUT(
     KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                __, __,      __,      __,      RESET,
     KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,                __, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,                __, __,      __,      __,      KC_ALGR,
                                KC_LPRN,                             __,
                                         KC_RPRN,                __,
                                                  KC_UNDS,   __
  )

};

