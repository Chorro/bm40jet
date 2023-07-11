/* Copyright 2020 tominabox1
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
#include QMK_KEYBOARD_H

enum layers {
  _QWERTY,
  _ARROWS,
  _SYMBOLS,
  _NUMPAD,
  _ADJUST
};

#define LT4_TAB LT(_NUMPAD,KC_TAB)
#define LCTLESC LCTL_T(KC_ESC)
#define MO2 MO(_ARROWS)
#define LT3_ENT LT(_SYMBOLS, KC_ENT)
#define OSMM OSM(MOD_LALT|MOD_LGUI)
#define MO5 MO(_ADJUST)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_planck_mit(
    LT4_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
    LCTLESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
    KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
    _______, _______, _______, KC_LGUI,     MO2,      KC_SPC     , LT3_ENT, KC_RGUI, _______, _______, _______
),


[_ARROWS] = LAYOUT_planck_mit(
    OSMM   , KC_EJCT, _______, _______, _______, _______, _______, _______,   KC_UP, _______, _______, KC_TRNS,
    _______, KC_LSFT, KC_LCTL, KC_LALT, KC_RGUI, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, KC_TRNS,     KC_TRNS     , _______, _______, _______, _______, KC_MUTE
),


[_SYMBOLS] = LAYOUT_planck_mit(
     KC_GRV, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_MINS,
    _______, _______, _______, _______, _______, _______, _______, _______,  KC_EQL, KC_LBRC, KC_RBRC, KC_NUHS,
    KC_TRNS, _______, _______, _______, _______, _______, KC_TILD, _______, _______, _______, _______, KC_TRNS,
    _______, _______, _______, KC_TRNS,     MO5,     KC_TRNS     , _______, _______, _______, _______, _______
),

[_NUMPAD] = LAYOUT_planck_mit(
    _______, _______, _______, _______, _______, _______, KC_PPLS,    KC_1,    KC_2,    KC_3, KC_PMNS, KC_TRNS,
    _______, _______, _______, _______, _______, _______, KC_PAST,    KC_4,    KC_5,    KC_6, KC_PSLS, _______,
    _______, _______, _______, _______, _______, _______, _______,    KC_7,    KC_8,    KC_9, KC_PEQL, _______,
    _______, _______, _______, _______, _______,     KC_TRNS     ,   KC_P0, KC_PDOT, _______, _______, _______
),

[_ADJUST] = LAYOUT_planck_mit(
      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
    RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, _______, _______, KC_MRWD, KC_MPLY, KC_MFFD, _______, _______,
   RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, _______, _______, _______, _______, _______, _______, _______,
    RGB_TOG, _______, _______, _______, KC_TRNS,     KC_TRNS     , KC_TRNS, _______, _______, _______,  QK_BOOT
)

};
