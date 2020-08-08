#include QMK_KEYBOARD_H

enum layer_names {
  _LINUX_QW = 0,
  _LINUX_CO,
  _LINUX_DVORAK,
  _MAC_QW,
  _MAC_CO,
  _MAC_DVORAK,
  _GAMING_QW,
  _LOWER,
  _RAISE,
  _ADJUST,
};

enum custom_keycodes {
  LINUX_QW = SAFE_RANGE,
  LINUX_CO,
  LINUX_DVORAK,
  MAC_QW,
  MAC_CO,
  MAC_DVORAK,
  GAMING_QW,
};

#define MK_KINETIC_SPEED
#define MOUSEKEY_WHEEL_INTERVAL 200
#define MOUSEKEY_WHEEL_DELAY 0
#define MOUSEKEY_WHEEL_MAX_SPEED 20
#define MOUSEKEY_WHEEL_TIME_TO_MAX 1

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define OLED_TIMEOUT_DISABLE

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

int layout = 0;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_LINUX_QW] = LAYOUT(
    KC_ESC,     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,      KC_5,   KC_6,                   KC_7,    KC_8,      KC_9,    KC_0,    KC_MINS,    KC_EQL,     KC_BSPACE, 
    KC_HOME,    KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,      KC_T,                  KC_Y,    KC_U,    KC_I,      KC_O,    KC_P,    KC_LBRC,    KC_RBRC,    KC_BSLASH,
    KC_END,     KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,      KC_G,                           KC_H,    KC_J,      KC_K,    KC_L,    KC_SCLN,    KC_QUOT,    KC_ENT,
    KC_BTN3,    KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,      KC_B,                           KC_N,    KC_M,      KC_COMM, KC_DOT,  KC_SLSH,    KC_LSFT,    KC_PGUP,
    LOWER,      _______,   KC_LGUI, KC_LALT, LOWER,   KC_MS_BTN1,                                         KC_SPACE,  RAISE,   KC_RALT, KC_RCTL,    KC_DELETE,  KC_PGDOWN
  ),
  [_LINUX_CO] = LAYOUT(
    KC_ESC,     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,     KC_5,   KC_6,                  KC_7,    KC_8,      KC_9,    KC_0,    KC_MINS,    KC_EQL,     KC_BSPACE, 
    KC_HOME,    KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P,     KC_G,                 KC_J,    KC_L,    KC_U,      KC_Y,    KC_SCLN, KC_LBRC,    KC_RBRC,    KC_BSLASH,
    KC_END,     KC_LCTL,   KC_A,    KC_R,    KC_S,    KC_T,     KC_D,                          KC_H,    KC_N,      KC_E,    KC_I,    KC_O,       KC_QUOT,    KC_ENT,
    KC_BTN3,    KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,                          KC_K,    KC_M,      KC_COMM, KC_DOT,  KC_SLSH,    KC_LSFT,    KC_PGUP,
    LOWER,      _______,   KC_LGUI, KC_LALT, LOWER,   KC_MS_BTN1,                                       KC_SPACE,  RAISE,   KC_RALT, KC_RCTL,    KC_DELETE,  KC_PGDOWN
  ),
  [_LINUX_DVORAK] = LAYOUT(
    KC_ESC,     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,     KC_5,   KC_6,                  KC_7,    KC_8,      KC_9,    KC_0,    KC_LBRC,    KC_RBRC,    KC_BSPACE, 
    KC_HOME,    KC_TAB,    KC_QUOT, KC_COMM, KC_DOT,  KC_P,     KC_Y,                 KC_F,    KC_G,    KC_C,      KC_R,    KC_L,    KC_SLSH,    KC_EQL,     KC_BSLASH,
    KC_END,     KC_LCTL,   KC_A,    KC_O,    KC_E,    KC_U,     KC_I,                          KC_D,    KC_H,      KC_T,    KC_N,    KC_S,       KC_MINS,    KC_ENT,
    KC_BTN3,    KC_LSFT,   KC_SCLN,  KC_Q,   KC_J,    KC_K,     KC_X,                          KC_B,    KC_M,      KC_W,    KC_V,    KC_Z,       KC_LSFT,    KC_PGUP,
    LOWER,      _______,   KC_LGUI, KC_LALT, LOWER,   KC_MS_BTN1,                                       KC_SPACE,  RAISE,   KC_RALT, KC_RCTL,    KC_DELETE,  KC_PGDOWN
  ),
  [_MAC_QW] = LAYOUT(
    KC_ESC,     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,      KC_5,   KC_6,                   KC_7,    KC_8,      KC_9,    KC_0,    KC_MINS,    KC_EQL,     KC_BSPACE, 
    KC_HOME,    KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,      KC_T,                  KC_Y,    KC_U,    KC_I,      KC_O,    KC_P,    KC_LBRC,    KC_RBRC,    KC_BSLASH,
    KC_END,     KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,      KC_G,                           KC_H,    KC_J,      KC_K,    KC_L,    KC_SCLN,    KC_QUOT,    KC_ENT,
    KC_BTN3,    KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,      KC_B,                           KC_N,    KC_M,      KC_COMM, KC_DOT,  KC_SLSH,    KC_LSFT,    KC_PGUP,
    LOWER,      _______,   KC_LALT, KC_LGUI, LOWER,   KC_MS_BTN1,                                         KC_SPACE,  RAISE,   KC_RALT, KC_RCTL,    KC_DELETE,  KC_PGDOWN
  ),
  [_MAC_CO] = LAYOUT(
    KC_ESC,     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,     KC_5,   KC_6,                  KC_7,    KC_8,      KC_9,    KC_0,    KC_MINS,    KC_EQL,     KC_BSPACE, 
    KC_HOME,    KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P,     KC_G,                 KC_J,    KC_L,    KC_U,      KC_Y,    KC_SCLN, KC_LBRC,    KC_RBRC,    KC_BSLASH,
    KC_END,     KC_LCTL,   KC_A,    KC_R,    KC_S,    KC_T,     KC_D,                          KC_H,    KC_N,      KC_E,    KC_I,    KC_O,       KC_QUOT,    KC_ENT,
    KC_BTN3,    KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,                          KC_K,    KC_M,      KC_COMM, KC_DOT,  KC_SLSH,    KC_LSFT,    KC_PGUP,
    LOWER,      _______,   KC_LALT, KC_LGUI, LOWER,   KC_MS_BTN1,                                       KC_SPACE,  RAISE,   KC_RALT, KC_RCTL,    KC_DELETE,  KC_PGDOWN
  ),
  [_MAC_DVORAK] = LAYOUT(
    KC_ESC,     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,     KC_5,   KC_6,                  KC_7,    KC_8,      KC_9,    KC_0,    KC_LBRC,    KC_RBRC,    KC_BSPACE, 
    KC_HOME,    KC_TAB,    KC_QUOT, KC_COMM, KC_DOT,  KC_P,     KC_Y,                 KC_F,    KC_G,    KC_C,      KC_R,    KC_L,    KC_SLSH,    KC_EQL,     KC_BSLASH,
    KC_END,     KC_LCTL,   KC_A,    KC_O,    KC_E,    KC_U,     KC_I,                          KC_D,    KC_H,      KC_T,    KC_N,    KC_S,       KC_MINS,    KC_ENT,
    KC_BTN3,    KC_LSFT,   KC_SCLN,  KC_Q,   KC_J,    KC_K,     KC_X,                          KC_B,    KC_M,      KC_W,    KC_V,    KC_Z,       KC_LSFT,    KC_PGUP,
    LOWER,      _______,   KC_LALT, KC_LGUI, LOWER,   KC_MS_BTN1,                                       KC_SPACE,  RAISE,   KC_RALT, KC_RCTL,    KC_DELETE,  KC_PGDOWN
  ),
  [_GAMING_QW] = LAYOUT(
    KC_ESC,     KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,      KC_5,   KC_6,                   KC_7,    KC_8,      KC_9,    KC_0,    KC_MINS,    KC_EQL,     KC_BSPACE, 
    KC_HOME,    KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,      KC_T,                  KC_Y,    KC_U,    KC_I,      KC_O,    KC_P,    KC_LBRC,    KC_RBRC,    KC_BSLASH,
    KC_END,     KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,      KC_G,                           KC_H,    KC_J,      KC_K,    KC_L,    KC_SCLN,    KC_QUOT,    KC_ENT,
    KC_BTN3,    KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,      KC_B,                           KC_N,    KC_M,      KC_COMM, KC_DOT,  KC_SLSH,    KC_LSFT,    KC_PGUP,
    LOWER,      _______,   KC_LALT, KC_LGUI, LOWER,   KC_SPACE,                                           KC_SPACE,  RAISE,   KC_RALT, KC_RCTL,    KC_DELETE,  KC_PGDOWN
  ),

  [_LOWER] = LAYOUT(
    _______, _______, KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,    KC_F9,   KC_F10,  KC_F11,  KC_F12,
    _______,  _______, LINUX_QW, LINUX_CO, LINUX_DVORAK,  _______, _______,                    _______, KC_MS_WH_UP,    KC_MS_UP, KC_MS_WH_DOWN,    _______,     _______,    _______, _______,
    _______, KC_MS_ACCEL2, MAC_QW, MAC_CO, MAC_DVORAK,  _______, _______,                             KC_MS_BTN1, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_MS_BTN2, _______, _______,
    _______, _______, GAMING_QW, _______, _______,  _______, _______,                        _______,    KC_PGUP,    _______,    KC_PGDOWN,   _______,    _______, KC__VOLUP, 
    _______, _______, _______, _______, _______,  KC_BTN3,                                                  KC_MS_BTN2, _______,    _______,     _______,    _______, KC__VOLDOWN
  ),

  [_RAISE] = LAYOUT(
    _______, _______, KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,    KC_F9,   KC_F10,  KC_F11,  KC_F12,
    _______, _______, _______, KC_UP,   _______,  _______, _______,                   _______, _______, KC_UP,   _______, _______,  _______, _______, _______,
    _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______,                            _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, _______,
    _______, _______, _______, _______, _______,  _______, _______,                            _______, _______, _______, _______,  _______, _______, _______,
    _______, _______, _______, _______, _______,  KC_BTN3,                                              KC_MS_BTN2, _______, _______,  _______, _______, _______
  ),

  [_ADJUST] = LAYOUT(
    _______, _______, _______, _______, _______,  _______, _______, _______,                    _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,  _______, _______,                    _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,  _______, _______,                             _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______,  _______, _______,                             _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______,  _______,                                               _______, _______, _______, _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LINUX_QW:
      if (record->event.pressed) {
        layout = 0;
        set_single_persistent_default_layer(_LINUX_QW);
      }
      return false;
    case LINUX_CO:
      if (record->event.pressed) {
        layout = 1;
        set_single_persistent_default_layer(_LINUX_CO);
      }
      return false;
    case LINUX_DVORAK:
      if (record->event.pressed) {
        layout = 2;
        set_single_persistent_default_layer(_LINUX_DVORAK);
      }
      return false;
    case MAC_QW:
      if (record->event.pressed) {
        layout = 3;
        set_single_persistent_default_layer(_MAC_QW);
      }
      return false;
    case MAC_CO:
      if (record->event.pressed) {
        layout = 4;
        set_single_persistent_default_layer(_MAC_CO);
      }
      return false;
    case MAC_DVORAK:
      if (record->event.pressed) {
        layout = 5;
        set_single_persistent_default_layer(_MAC_DVORAK);
      }
      return false;
    case GAMING_QW:
      if (record->event.pressed) {
        layout = 6;
        set_single_persistent_default_layer(_GAMING_QW);
      }
      return false;
  }
  return true;
}

#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
    // Host Keyboard Layer Status
    if (layout == 0) {
        oled_write_P(PSTR("LINUX - QWERTY"), false);
    } else if (layout == 1) {
        oled_write_P(PSTR("LINUX - COLEMAK"), false);
    } else if (layout == 2) {
        oled_write_P(PSTR("LINUX - DVORAK"), false);
    } else if (layout == 3) {
        oled_write_P(PSTR("MAC - QWERTY"), false);
    } else if (layout == 4) {
        oled_write_P(PSTR("MAC - COLEMAK"), false);
    } else if (layout == 5) {
        oled_write_P(PSTR("MAC - DVORAK"), false);
    } else if (layout == 6) {
        oled_write_P(PSTR("WINDOWS - GAMING"), false);
    }
    oled_write_P(PSTR("\n\nUNK\nbuild 606551d rev1"), false);
}
#endif

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 3) {
        if (clockwise) {
          tap_code(KC_VOLU);
        } else {
          tap_code(KC_VOLD);
        }
  } else if (index == 2) {
        if (clockwise) {
          tap_code(KC_BRIGHTNESS_DOWN);
        } else {
          tap_code(KC_BRIGHTNESS_UP);
        }
  }
/*
*/
}
/*
*/
