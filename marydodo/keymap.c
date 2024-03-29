/* Copyright 2020 LAZYDESIGNERS
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

 // ~~~~~~ Custom Keymap by marydodo ~~~~~

 */
#include QMK_KEYBOARD_H
#define CLIPB LCTL(LSFT(KC_C))
#define ALFRED LCTL(KC_SPC)
#define QUES LSFT(KC_SLSH)
#define SHFTTAB LSFT(KC_TAB)

enum layer_names {
    _QWERTY,
    _SYMBOLS,
    _CONFIG,
    _SHIFTED,
    _GAMING
};

#define SYMBOLS    MO(_SYMBOLS)
#define CONFIG     MO(_CONFIG)
#define GAMING     TT(_GAMING)
#define SHIFTED    MO(_SHIFTED)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// Alpha Layer
    [_QWERTY] = LAYOUT(
               KC_ESC,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
               KC_TAB,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
               SHIFTED,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,               KC_SLSH, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_ENT,
               KC_LCTL,  KC_LALT,                   KC_LGUI, SYMBOLS,              KC_SPC,  CONFIG,                     KC_LEFT, KC_DOWN, KC_RGHT
             ),
// Number and Shifted symbols
    [_SYMBOLS] = LAYOUT(
               KC_GRV,   KC_EXLM, KC_AT,  KC_HASH, KC_DLR, KC_PERC,              KC_CIRC,  KC_AMPR,  KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
               KC_TILD,  KC_1,    KC_2,   KC_3,    KC_4,   KC_5,                 KC_UNDS,  KC_MINS,  KC_EQL,  KC_LBRC, KC_RBRC, S(KC_QUOT),
               KC_CAPS,  KC_6,    KC_7,   KC_8,    KC_9,   KC_0,                 QUES,     S(KC_EQL),  KC_LCBR, KC_RCBR, KC_SLSH, QUES,  KC_BSLS,
               CLIPB,  ALFRED,                  KC_NO,  KC_NO,                KC_ENT,   S(KC_BSLS),                      KC_NO,   KC_NO, KC_NO
             ),
// FN, RESET, RGB config layer, gaming layer (tap toggled)
    [_CONFIG] = LAYOUT(
               KC_NO,  KC_F1,   KC_F2,  KC_F3,   KC_F4,  KC_F5,                KC_INS,  KC_DEL,   KC_HOME, KC_END,  KC_NO,   KC_NO,
	       KC_NO,  KC_F6,   KC_F7,  KC_F8,   KC_F9,  KC_F10,               RGB_TOG,   RGB_RMOD,    RGB_MOD,   KC_NO,   KC_NO,   KC_NO,
	       KC_NO,  KC_F11,  KC_F12, KC_NO,   KC_NO,  KC_NO,                KC_NO, KC_NO, KC_MUTE, KC_NO, KC_NO, KC_NO, RESET,
	       KC_NO,  KC_NO,                    KC_MUTE,  KC_VOLD,                KC_VOLU,   KC_NO,                      GAMING,   KC_NO, KC_NO
	       ),
// Shift Layer (only used for lighting layer) - can alternatively be used as an actual layer
    [_SHIFTED] = LAYOUT(
	       KC_GRV,   S(KC_Q), S(KC_W), S(KC_E), S(KC_R), S(KC_T),            S(KC_Y), S(KC_U), S(KC_I), S(KC_O),    S(KC_P),    KC_BSPC,
               SHFTTAB,   S(KC_A), S(KC_S), S(KC_D), S(KC_F), S(KC_G),            S(KC_H), S(KC_J), S(KC_K), S(KC_L),    S(KC_SCLN), S(KC_QUOT),
               KC_LSFT,  S(KC_Z), S(KC_X), S(KC_C), S(KC_V), S(KC_B),            S(QUES), S(KC_N), S(KC_M), S(KC_COMM), S(KC_DOT),  QUES,    S(KC_ENT),
               CLIPB,  ALFRED,                   KC_LGUI, KC_NO,              KC_SPC,  S(KC_BSLS),                         KC_LEFT,   KC_DOWN, KC_RGHT
	    ),
// Gaming Toggle Layer (tap toggled)
    [_GAMING] = LAYOUT(
               KC_ESC,  KC_Q,    KC_W,  KC_E,  KC_R,    KC_T,               KC_Y,    KC_U,  KC_I,  KC_O,    KC_P,    KC_BSPC,
               KC_TAB,  KC_A,    KC_S,  KC_D,  KC_F,    KC_G,               KC_H,    KC_J,  KC_K,  KC_L,    KC_SCLN, KC_QUOT,
               KC_LSFT, KC_Z,    KC_X,  KC_C,  KC_V,    KC_B,               KC_SLSH, KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_UP,   KC_ENT,
               KC_LCTL, KC_LALT,               KC_LGUI, KC_SPC,             KC_SPC,  GAMING,                 KC_LEFT, KC_DOWN, KC_RGHT
               ),

};

// Light Bolt logo when caps lock is active. Hard to ignore!
const rgblight_segment_t PROGMEM capslock[] = RGBLIGHT_LAYER_SEGMENTS(
    {9, 4, HSV_RED}       // Light up only lightning bolt
);
// Light Bolt logo when keyboard layer 1 is active
const rgblight_segment_t PROGMEM num[] = RGBLIGHT_LAYER_SEGMENTS(
    {9, 4, HSV_BLUE}      // Light up only lightning bolt
);
// Light Bolt logo when keyboard layer 2 is active
const rgblight_segment_t PROGMEM fnreset[] = RGBLIGHT_LAYER_SEGMENTS(
    {9, 4, HSV_PURPLE}     // Light up only lightning bolt
);
// Light Bolt logo when keyboard layer 3 is active
const rgblight_segment_t PROGMEM shift[] = RGBLIGHT_LAYER_SEGMENTS(
    {9, 4, HSV_YELLOW}     // Light up only lightning bolt
);
// Light Bolt Logo when keyboard layer 4 is active
const rgblight_segment_t PROGMEM gaming[] = RGBLIGHT_LAYER_SEGMENTS(
    {9, 4, HSV_WHITE}     // Light up only lightning bolt
);
// Light Bolt Logo when keyboard LGUI is pressed
const rgblight_segment_t PROGMEM gui[] = RGBLIGHT_LAYER_SEGMENTS(
    {9, 4, HSV_GREEN}     // Light up only lightning bolt
);

// To light up underglow only, use {0, 9, COLOR}
// To light up ALL LEDs including underglow and ligntning bolt logo, use {0, 13, COLOR}


// Array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    capslock,
    num,    // RGB layer state 1 - Overrides caps lock layer
    fnreset,  // RGB layer state 2 - Overrides other layers
    shift,    // RGB layer state 3 - Overrides other layers
    gaming, // RGB layer state 4 - Overrides all other layers
    gui

);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    // Both layers will light up if both kb layers are active
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    rgblight_set_layer_state(4, layer_state_cmp(state, 4));
    rgblight_set_layer_state(5, layer_state_cmp(state, 5));
    return state;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}

// Lights up the ligtning bolt YELLOW using the shift_layer RGB_LAYER_SEGMENTS
bool process_record_user (uint16_t keycode, keyrecord_t *record) {
    // when shift is pressed or released, toggle the state of the lighting
    if (keycode == KC_LGUI) {
        // if pressed, turn on
        if (record->event.pressed) {
            rgblight_set_layer_state(5, true);
        }
        // if released, turn off
        else {
            rgblight_set_layer_state(5, false);
        }
    }
    return true;
  }



 // ~~~~~~ Custom Keymap by marydodo ~~~~~
