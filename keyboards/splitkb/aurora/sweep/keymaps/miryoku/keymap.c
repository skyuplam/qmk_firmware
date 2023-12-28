/* Copyright 2023 Terrence Lam  (@skyuplam) <skyuplam@gmail.com>
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
#include "version.h"
#include "tlam.h"

enum custom_keycodes {
    VRSN = SAFE_RANGE,
};

enum layers {
    U_BASE,   // default layer
    U_SYM,    // symbols
    U_NUM,    // numbers
    U_NAV,    // navigation
    U_MEDIA,  // media keys
    U_MOUSE,  // mouse keys
    U_FUN,    // function keys
    U_BUTTON, // button keys
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[U_BASE] = LAYOUT(
        KC_Q,              KC_W,         KC_E,             KC_R,             KC_T,                 KC_Y,             KC_U,              KC_I,         KC_O,           KC_P,
        LGUI_T(KC_A),      LALT_T(KC_S), LCTL_T(KC_D),     LSFT_T(KC_F),     KC_G,                 KC_H,             LSFT_T(KC_J),      LCTL_T(KC_K), LALT_T(KC_L),   LGUI_T(KC_SCLN),
        LT(U_BUTTON,KC_Z), ALGR_T(KC_X), KC_C,             KC_V,             KC_B,                 KC_N,             KC_M,              KC_COMM,      ALGR_T(KC_DOT), LT(U_BUTTON,KC_SLSH),
                                                           LT(U_NAV,KC_SPC), LT(U_MOUSE,KC_BSPC),  LT(U_SYM,KC_TAB), LT(U_NUM,KC_ENT)
    ),
    [U_NAV] = LAYOUT(
        KC_NO,             KC_NO,        KC_NO,            KC_NO,               KC_NO,             U_RDO,            U_PST,             U_CPY,        U_CUT,          U_UND,
        KC_LGUI,           KC_LALT,      KC_LCTL,          KC_LSFT,             KC_NO,             KC_LEFT,          KC_DOWN,           KC_UP,        KC_RGHT,        CW_TOGG,
        KC_NO,             KC_ALGR,      KC_NO,            KC_NO,               KC_NO,             KC_HOME,          KC_PGDN,           KC_PGUP,      KC_END,         KC_INS,
                                                           KC_NO,               KC_NO,             KC_TAB,           KC_ENT
    ),
    [U_NUM] = LAYOUT(
        KC_LBRC,           KC_7,         KC_8,             KC_9,                KC_RBRC,           KC_NO,            KC_NO,             KC_NO,        KC_NO,          KC_NO,
        KC_QUOT,           KC_4,         KC_5,             KC_6,                KC_EQL,            KC_LSFT,          KC_LCTL,           KC_LALT,      KC_LGUI,        KC_NO,
        KC_GRV,            KC_1,         KC_2,             KC_3,                KC_BSLS,           KC_NO,            KC_NO,             KC_ALGR,      KC_NO,          KC_NO,
                                                           KC_0,                KC_MINS,           KC_NO,            KC_NO
    ),
    [U_SYM] = LAYOUT(
        KC_LCBR,           KC_AMPR,      KC_ASTR,          KC_LPRN,             KC_RCBR,           KC_NO,            KC_NO,             KC_NO,        KC_NO,          KC_NO,
        KC_DQUO,           KC_DLR,       KC_PERC,          KC_CIRC,             KC_PLUS,           KC_NO,            KC_LSFT,           KC_LCTL,      KC_LALT,        KC_LGUI,
        KC_TILD,           KC_EXLM,      KC_AT,            KC_HASH,             KC_PIPE,           KC_NO,            KC_NO,             KC_NO,        KC_ALGR,        KC_NO,
                                                           KC_RPRN,             KC_UNDS,           KC_NO,            KC_NO
    ),
    [U_MOUSE] = LAYOUT(
        KC_NO,             KC_NO,        KC_NO,            KC_NO,               KC_NO,             U_RDO,            U_PST,            U_CPY,        U_CUT,          U_UND,
        KC_LGUI,           KC_LALT,      KC_LCTL,          KC_LSFT,             KC_NO,             KC_MS_L,          KC_MS_D,          KC_MS_U,      KC_MS_R,        KC_NO,
        KC_NO,             KC_ALGR,      KC_NO,            KC_NO,               KC_NO,             KC_WH_L,          KC_WH_D,          KC_WH_U,      KC_WH_R,        KC_NO,
                                                           KC_NO,               KC_NO,             KC_BTN1,          KC_BTN2
    ),
    [U_FUN] = LAYOUT(
        KC_F12,            KC_F7,        KC_F8,            KC_F9,               KC_PSCR,           KC_NO,            KC_NO,            KC_NO,        KC_NO,          KC_NO,
        KC_F11,            KC_F4,        KC_F5,            KC_F6,               KC_SCRL,           KC_NO,            KC_LSFT,          KC_LCTL,      KC_LALT,        KC_LGUI,
        KC_F10,            KC_F1,        KC_F2,            KC_F3,               KC_PAUS,           KC_NO,            KC_NO,            KC_NO,        KC_ALGR,        KC_NO,
                                                           KC_SPC,              KC_BSPC,           KC_NO,            KC_NO
    ),
    [U_MEDIA] = LAYOUT(
        KC_NO,             KC_NO,        KC_NO,            KC_NO,               KC_NO,             RGB_MOD,          RGB_HUI,          RGB_SAI,      RGB_VAI,        RGB_TOG,
        KC_LGUI,           KC_LALT,      KC_LCTL,          KC_LSFT,             KC_NO,             KC_MPRV,          KC_VOLD,          KC_VOLU,      KC_MNXT,        KC_NO,
        KC_NO,             KC_ALGR,      KC_NO,            KC_NO,               KC_NO,             KC_NO,            KC_NO,            KC_NO,        KC_NO,          OU_AUTO,
                                                           KC_NO,               KC_NO,             KC_MPLY,          KC_MSTP
    ),
    [U_BUTTON] = LAYOUT(
        U_UND,             U_CUT,        U_CPY,            U_PST,               U_RDO,             U_RDO,            U_PST,            U_CPY,        U_CUT,          U_UND,
        KC_LGUI,           KC_LALT,      KC_LCTL,          KC_LSFT,             KC_NO,             KC_NO,            KC_LSFT,          KC_LCTL,      KC_LALT,        KC_LGUI,
        U_UND,             U_CUT,        U_CPY,            U_PST,               U_RDO,             U_RDO,            U_PST,            U_CPY,        U_CUT,          U_UND,
                                                           KC_BTN2,             KC_BTN1,           KC_BTN1,          KC_BTN2
    ),
};
// clang-format on

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

// thumb combos
const uint16_t PROGMEM thumbcombos_base_right[] = {LT(U_SYM, KC_TAB), LT(U_NUM, KC_ENT), COMBO_END};
const uint16_t PROGMEM thumbcombos_base_left[]  = {LT(U_NAV, KC_SPC), LT(U_MOUSE, KC_BSPC), COMBO_END};
const uint16_t PROGMEM thumbcombos_nav[]        = {KC_TAB, KC_ENT, COMBO_END};
const uint16_t PROGMEM thumbcombos_mouse[]      = {KC_BTN1, KC_BTN2, COMBO_END};
const uint16_t PROGMEM thumbcombos_media[]      = {KC_MPLY, KC_MSTP, COMBO_END};
const uint16_t PROGMEM thumbcombos_num[]        = {KC_0, KC_MINS, COMBO_END};
const uint16_t PROGMEM thumbcombos_sym[]        = {KC_RPRN, KC_UNDS, COMBO_END};
const uint16_t PROGMEM thumbcombos_fun[]        = {KC_SPC, KC_BSPC, COMBO_END};

// clang-format off
combo_t key_combos[COMBO_COUNT] = {
    COMBO(thumbcombos_base_right, LT(U_FUN, KC_DEL)),
    COMBO(thumbcombos_base_left, LT(U_MEDIA, KC_ESC)),
    COMBO(thumbcombos_nav, KC_DEL),
    COMBO(thumbcombos_mouse, KC_BTN3),
    COMBO(thumbcombos_media, KC_MUTE),
    COMBO(thumbcombos_num, KC_DOT),
    COMBO(thumbcombos_sym, KC_LPRN),
    COMBO(thumbcombos_fun, KC_APP),
};
// clang-format on

void keyboard_pre_init_user(void) {
    // Set our LED pin as output
    setPinOutput(24);
    // Turn the LED off
    // (Due to technical reasons, high is off and low is on)
    writePinHigh(24);
}

// void keyboard_post_init_user(void) {
//     // Initialize RGB to static black
//     rgblight_enable_noeeprom();
//     rgblight_sethsv_noeeprom(HSV_BLACK);
//     rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
// }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case VRSN:
                SEND_STRING(QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
                return false;
        }
    }
    return true;
}
