#pragma once

#include "PinDefs.hpp"

typedef enum {
    InterruptRising = GPIO_MODE_IT_RISING,
    InterruptFalling = GPIO_MODE_IT_FALLING,
    InterruptRisingFalling = GPIO_MODE_IT_RISING_FALLING
} InterruptMode;

typedef void (*InterruptFunction)();

class InterruptIn {
public:
    /** Configures GPIO pin for InterruptIn
     *
     * @param pin Pin def external to board
     * @param pull Pin pull type (pull up, pull down, or no pull)
     * @param mode Interrupt mode (rising edge, falling edge, or both edges)
     * @param function Function linked to interrupt
     */
    InterruptIn(PinName pin, InterruptFunction function, PullType pull = PullType::PullNone,
        InterruptMode mode = InterruptMode::InterruptRising);

    ~InterruptIn();

    /** Reads current value of pin
     *
     * @return true (high) or false (low)
     */
    bool read();

    operator bool() {
        return read();
    }

protected:
    PinName pin;
    InterruptFunction function;
};