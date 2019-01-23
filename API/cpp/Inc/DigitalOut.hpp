#pragma once

#include "PinDefs.hpp"

typedef enum { PUSH_PULL = GPIO_MODE_OUTPUT_PP, OPEN_DRAIN = GPIO_MODE_OUTPUT_OD } PinMode;

typedef enum { LOW = GPIO_SPEED_FREQ_LOW, MEDIUM = GPIO_SPEED_FREQ_MEDIUM, HIGH = GPIO_SPEED_FREQ_HIGH, VERY_HIGH = GPIO_SPEED_FREQ_VERY_HIGH } PinSpeed;

class DigitalOut {
public:
    DigitalOut(PinName pin, PullType pull = PullType::PullNone, PinMode mode = PinMode::PUSH_PULL, PinSpeed speed = PinSpeed::LOW, bool inverted = false);
    
    ~DigitalOut();

    void write(bool state);
    void toggle();
    
    bool read();
    
    void operator =(bool rhs) {
        this->write(rhs);
    }

    operator bool() {
        return read();
    }

protected:
    PinName pin;
    bool inverted;
};
