#ifndef __DIGITAL_OUT_H
#define __DIGITAL_OUT_H

#include "pin_defs.h"

typedef enum {
    PUSH_PULL = GPIO_MODE_OUTPUT_PP,
    OPEN_DRAIN = GPIO_MODE_OUTPUT_OD
} pin_mode;

typedef enum {
    LOW = GPIO_SPEED_FREQ_LOW,
    MEDIUM = GPIO_SPEED_FREQ_MEDIUM,
    HIGH = GPIO_SPEED_FREQ_HIGH, 
    VERY_HIGH = GPIO_SPEED_FREQ_VERY_HIGH
} pin_speed;

// Initializes Digital Out
// Required: pin_name pin
// Default: pull_type PULL_NONE, pin_mode PUSH_PULL, pin_speed LOW
void digitalout_init(pin_name pin);
// Initializes Digital Out
// Required: pin_name pin, pull_type type, pin_mode mode, pin_speed speed
void digitalout_init_ex(pin_name pin, pull_type type, pin_mode mode, pin_speed speed);
// Deinitalizes Digital Out
// Required: pin_name pin
void digitalout_deinit(pin_name pin);

// Writes pin state to 1 (high) or 0 (low)
// Required: pin_name pin, int state
void digitalout_write(pin_name pin, int state);
// Toggles pin state
// Required: pin_name pin
void digitalout_toggle(pin_name pin);
// Returns pin state as 1 (high) or 0 (low)
// Required: pin_name pin
int digitalout_read(pin_name p);

#endif
