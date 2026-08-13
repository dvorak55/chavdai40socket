 /* Copyright 2020 t-miyajima
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer) Default Layer
   * ,-------------------------------------------------------.
   * | Tab |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  -| Bspc|
   * |-------------------------------------------------------|
   * | Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;| Return|
   * |-------------------------------------------------------|
   * | Shift  |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|   /| Del|
   * `----.---------------------------------------------.---'
   *      | Ctl |Alt |  Win  |   Space   |Win |Alt |Ctl |
   *      `---------------------------------------------'
   */
    LAYOUT_44key( /* Base */
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_BSPC,
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_MINUS, KC_ENTER,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSFT,
        KC_LCTL, KC_LALT, KC_LGUI, KC_SPACE, KC_RGUI, KC_RALT, KC_RCTL),
    LAYOUT_44key( /* layer 1 */
        KC_GRAVE, KC_EXCLAIM, LSFT(KC_2), KC_HASH, KC_DLR, KC_PERCENT, LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), KC_RBRC, KC_NONUS_HASH, KC_EQUAL,
        KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_INT3,
        KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_SCLN, KC_QUOTE, RSFT(KC_INT1),
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};
