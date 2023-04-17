#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_G , KC_S , KC_R , KC_X , KC_B,
        KC_1 , KC_2 , KC_7 , KC_0 , KC_DOT,
        KC_VOLD , KC_VOLU , KC_MUTE , KC_MPRV , KC_MNXT
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);
        return true;
    } else {
        tap_code(KC_VOLD);
        return true;
    }
    return false;
}

void matrix_init_user(void) {
    setPinInputHigh(D0);
}
static bool pressed;
void matrix_scan_user(void) {
    if (readPin(D0)) {
        pressed = false;
    } else {
        if (!pressed) {
            tap_code(KC_MPLY);
        }
        pressed = true;
    }

}