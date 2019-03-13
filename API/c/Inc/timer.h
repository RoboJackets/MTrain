#ifndef __TIMER_H
#define __TIMER_H

#include "pin_defs.h"

typedef enum {
    INTERRUPT_RISING = GPIO_MODE_IT_RISING,
    INTERRUPT_FALLING = GPIO_MODE_IT_FALLING,
    INTERRUPT_RISING_FALLING = GPIO_MODE_IT_RISING_FALLING
} interrupt_mode;

/** Configures GPIO pin for interruptin
 *
 * Defaults to no pull type and both edge detection
 *
 * @param pin Pin def external to board
 * @param function Function linked to interrupt
 */
void timer_init(pin_name pin, void (*function)());

/** Configures GPIO pin for interruptin
 *
 * @param pin Pin def external to board
 * @param function Function linked to timer
 * @param pull Pin pull type (pull up, pull down, or no pull)
 * @param mode Interrupt mode (rising edge, falling edge, or both edges)
 */
void timer_init_ex(pin_name pin, void (*function)(), pull_type pull,
    interrupt_mode mode);

/** Deinits GPIO pin
 *
 * @param pin Pin def external to board
 */
void timer_deinit(pin_name pin);

#endif
