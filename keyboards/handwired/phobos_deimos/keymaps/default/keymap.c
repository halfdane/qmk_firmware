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

enum layers { BASE, MBO, MEDR, NAVR, MOUR, NSSL, NSL, FUNL };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT(
     __, __,       __,        __,       __,       __,                  __,   __,       __,        __,          __,       __,
     __, KC_Q,     KC_W,      KC_F,     KC_P,     KC_B,                KC_J, KC_L,     KC_U,      KC_Y,        KC_QUOTE, __,
     __, G_(KC_A), A_(KC_R),  C_(KC_S), S_(KC_T), KC_G, RESET,  RESET, KC_M, S_(KC_N), C_(KC_E),  A_(KC_I),    G_(KC_O), __,
     __, KC_Z,     GR_(KC_X), KC_C,     KC_D,     KC_V,                KC_K, KC_H,     KC_COMM,   GR_(KC_DOT), KC_SLSH,  __,
     __, __,       __,        __,                                                      __,        __,          __,       __,
                                 LT(MEDR, KC_ESC),                         LT(FUNL, KC_DEL),
                                    LT(NAVR, KC_SPC),                  LT(NSL, KC_BSPC),
                                          LT(MOUR, KC_TAB),        LT(NSSL, KC_ENT)
  ),

[NAVR] = LAYOUT(
      __, __,      __,      __,      __,      __,                __,      __,      __,      __,      __,      __,
      __, RESET,   __,      __,      __,      __,                 U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   __,
      __, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, __,  RESET,    __,  KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, __,
      __, KC_ALGR, U_CUT,   U_CPY,   U_PST,   __,                 KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  __,
      __, __,      __,      __,                                                              __,   __,   __,   __,
                                     __,                                   KC_DEL,
                                              __,                 KC_BSPC,
                                                   KC_BSPC,  KC_ENT
  ),

[MOUR] = LAYOUT(
      __, __,      __,       __,     __,      __,                __,   __,       __,     __,      __,      __,
      __, RESET,   __,       __,     __,      __,                __,   __,       __,     __,      __,      __,
      __, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, __,  RESET,    __, __,   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, __,
      __, KC_ALGR, __,      __,      __,      __,                __,   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, __,
      __, __,      __,      __,                                                 __,      __,      __,      __,
                                     __,                               KC_BTN2,
                                              __,                KC_BTN3,
                                                   __,       KC_BTN1
  ),

[MEDR] = LAYOUT(
      __, __,      __,       __,     __,      __,                __,   __,       __,     __,      __,      __,
      __, RESET,   __,       __,     __,      __,                __,   __,       __,     __,      __,      __,
      __, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, __,  RESET,    __, __,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, __,
      __, KC_ALGR, __,      __,      __,      __,                __,   __,       __,     __,      __,      __,
      __, __,      __,      __,                                                 __,      __,      __,      __,
                                     __,                               KC_MUTE,
                                              __,                KC_MPLY,
                                                   __,       KC_MSTP
  ),

[FUNL] = LAYOUT(
      __, __,     __,    __,    __,    __,                       __, __,      __,      __,      __,      __,
      __, KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR,                  __, __,      __,      __,      __,      __,
      __, KC_F11, KC_F4, KC_F5, KC_F6, KC_SLCK, RESET,       __, __, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, __,
      __, KC_F10, KC_F1, KC_F2, KC_F4, KC_PAUS,                  __, __,      __,      __,      KC_ALGR, __,
      __, __,     __,    __,                                                  __,      __,      __,      __,
                                KC_APP,                              __,
                                       KC_SPC,                   __,
                                                KC_TAB,      __
  ),

[NSL] = LAYOUT(
      __, __,      __,   __,   __,   __,                    __, __,      __,      __,      __,      __,
      __, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC,               __, __,      __,      __,      __,      __,
      __, KC_SCLN, KC_4, KC_5, KC_6, KC_EQL, RESET,     __, __, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, __,
      __, KC_GRV,  KC_1, KC_2, KC_3, KC_BSLS,               __, __,      __,      __,      KC_ALGR, __,
      __, __,      __,   __,                                             __,      __,      __,      __,
                                KC_DOT,                         __,
                                       KC_0,                __,
                                             KC_MINS,   __
  ),

[NSSL] = LAYOUT(
      __, __,      __,      __,      __,      __,                     __, __,      __,      __,      __,      __,
      __, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                __, __,      __,      __,      __,      __,
      __, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, RESET,     __, __, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, __,
      __, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,                __, __,      __,      __,      KC_ALGR, __,
      __, __,      __,      __,                                                    __,      __,      __,      __,
                                     KC_LPRN,                             __,
                                              KC_RPRN,                __,
                                                       KC_UNDS,   __
  )

};

