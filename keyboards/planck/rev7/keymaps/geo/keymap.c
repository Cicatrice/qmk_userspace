#include QMK_KEYBOARD_H

#include "./my_unicodemap.c"

#ifdef AUDIO_ENABLE
#    include "muse.h"
#endif

enum planck_layers {
  _QWERTY,
  _NUMPAD,
  _LOWER,
  _RAISE,
  _SYS,
  // _GREEK
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_planck_grid(
    KC_ESC,     KC_Q,       KC_W,       KC_E,     KC_R,       KC_T,       KC_Y,       KC_U,           KC_I,           KC_O,       KC_P,       KC_BSPC,
    KC_TAB,     KC_A,       KC_S,       KC_D,     KC_F,       KC_G,       KC_H,       KC_J,           KC_K,           KC_L,       KC_SCLN,    KC_QUOT,
    KC_LSFT,    KC_Z,       KC_X,       KC_C,     KC_V,       KC_B,       KC_N,       KC_M,           KC_COMM,        KC_DOT,     KC_UP,      KC_RSFT,
    KC_LCTL,    KC_LGUI,    KC_LALT,    KC_CAPS,  MO(_LOWER), KC_SPC,     KC_SPC,     MO(_RAISE),     KC_SLSH,        KC_LEFT,    KC_DOWN,    KC_RGHT
  ),
  [_NUMPAD] = LAYOUT_planck_grid(
    KC_ESC,     KC_MINS,    KC_PPLS,    KC_P7,    KC_P8,      KC_P9,      KC_D,       KC_E,           KC_F,           KC_LPRN,    KC_RPRN,    KC_BSPC,
    _______,    KC_PSLS,    KC_PAST,    KC_P4,    KC_P5,      KC_P6,      KC_A,       KC_B,           KC_C,           KC_LBRC,    KC_RBRC,    KC_NO,
    _______,    KC_PCMM,    KC_PEQL,    KC_P1,    KC_P2,      KC_P3,      KC_NO,      _______,        KC_NO,          KC_COLN,    _______,    KC_NO,
    _______,    _______,    _______,    KC_P0,    KC_PDOT,    KC_SPC,     KC_SPC,     TO(_QWERTY),    KC_NO,          _______,    _______,    _______
  ),
  [_LOWER] = LAYOUT_planck_grid(
    KC_TILD,    KC_EXLM,    KC_AT,      KC_HASH,  KC_DLR,     KC_PERC,    KC_CIRC,    KC_AMPR,        KC_ASTR,        KC_LPRN,    KC_RPRN,    KC_DEL,
    _______,    KC_F13,     KC_F14,     KC_F15,   KC_F16,     KC_F17,     KC_F18,     KC_UNDS,        KC_PLUS,        KC_LCBR,    KC_RCBR,    KC_PIPE,
    _______,    KC_F19,     KC_F20,     KC_F21,   KC_F22,     KC_F23,     KC_F24,     LSFT(KC_NUHS),  LSFT(KC_NUBS),  KC_INS,     KC_HOME,    KC_PGUP,
    _______,    _______,    _______,    _______,  _______,    KC_ENT,     KC_ENT,     MO(_SYS),       KC_PIPE,        KC_DEL,     KC_END,     KC_PGDN
  ),
  [_RAISE] = LAYOUT_planck_grid(
    KC_GRV,     KC_1,       KC_2,       KC_3,     KC_4,       KC_5,       KC_6,       KC_7,           KC_8,           KC_9,       KC_0,       KC_DEL,
    _______,    KC_F1,      KC_F2,      KC_F3,    KC_F4,      KC_F5,      KC_F6,      KC_MINS,        KC_EQL,         KC_LBRC,    KC_RBRC,    KC_BSLS,
    _______,    KC_F7,      KC_F8,      KC_F9,    KC_F10,     KC_F11,     KC_F12,     TT(_NUMPAD),    KC_NO,          _______,    _______,    _______,
    _______,    _______,    _______,    _______,  MO(_SYS),   KC_ENT,     KC_ENT,     _______,        _______,     _______,    _______,    _______
    // _______,    _______,    _______,    _______,  MO(_SYS),   KC_ENT,     KC_ENT,     _______,        MO(_GREEK),     _______,    _______,    _______
  ),
  [_SYS] = LAYOUT_planck_grid(
    _______,    QK_BOOT,    DB_TOGG,    UG_TOGG,  _______,    _______,    UG_TOGG,    UG_HUEU,        UG_SATU,        UG_VALU,    UG_SPDU,    KC_DEL,
    _______,    _______,    MU_NEXT,    AU_ON,    AU_OFF,     AG_NORM,    UG_NEXT,    UG_HUED,        UG_SATD,        UG_VALD,    UG_SPDD,    _______,
    _______,    AU_PREV,    AU_NEXT,    MU_ON,    MU_OFF,     MI_ON,      MI_OFF,     DF(_QWERTY),    _______,        _______,    _______,    _______,
    _______,    _______,    _______,    _______,  _______,    KC_PSCR,    KC_PSCR,    _______,        _______,        _______,    _______,    _______
    ),
  // [_GREEK] = LAYOUT_planck_grid(
  //   KC_GRV,     KC_SCLN,    UG_SIGMA_F, UG_ETA,   UG_RHO,     UG_TAU,     UG_EPSI,    UG_THETA,       UG_IOTA,        UG_OMIC,    UG_PI,      _______,
  //   _______,    UG_ALPHA,   UG_SIGMA,   UG_DELTA, UG_PHI,     UG_GAMMA,   UG_ETA,     UG_XI,          UG_KAPPA,       UG_LAMBDA,  _______,    _______,
  //   _______,    UG_ZETA,    UG_CHI,     UG_PSI,   UG_OMEGA,   UG_BETA,    UG_NU,      UG_MU,          _______,        _______,    _______,    _______,
  //   _______,    _______,    _______,    _______,  _______,    _______,    _______,    _______,        _______,        _______,    _______,    _______
  //   ),
};



void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom();
  layer_clear();
  layer_on(_QWERTY);
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
  rgblight_sethsv_noeeprom(HSV_WHITE);
  return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    float my_song[][2] = SONG(QWERTY_SOUND);
    switch (get_highest_layer(state)) {
    case _RAISE:
        rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING+3);
        rgblight_sethsv_noeeprom(HSV_CYAN);
        break;
    case _LOWER:
        rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING+3);
        rgblight_sethsv_noeeprom(HSV_TURQUOISE);
        break;
    case _NUMPAD:
        PLAY_SONG(my_song);
        rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
        rgblight_sethsv_noeeprom(HSV_GOLD);
        break;
    case _SYS:
        rgblight_mode_noeeprom(RGBLIGHT_MODE_KNIGHT+2);
        rgblight_sethsv_noeeprom(HSV_RED);
        break;
    default:
        default_layer_state_set_user(state);
        break;
    }
  return state;
}
