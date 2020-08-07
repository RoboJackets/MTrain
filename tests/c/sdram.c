#include "mtrain.h"
#include "sdram.h"

int fill_function (int i) {
    return (i * i) + i + 3;
}

/**
 * Blink LEDs back and forth
 */
int main(void)
{
    digitalout_init(LED1);
    digitalout_init(LED2);
    digitalout_init(LED3);
    digitalout_init(LED4);

    pin_name leds[] = {LED1, LED2, LED3, LED4};

    int test_length = 400;

    int* ram_start = (int*) 0xC0000000;
    int* cur = ram_start;

    int test_success = 1;

    digitalout_toggle(leds[0]);
    for(int i = 0; i < test_length; i++) {
        //*cur = fill_function(i); // HARD FAULT
        uint32_t temp = fill_function(i);
        BSP_SDRAM_WriteData((uint32_t)cur, (uint32_t)&, 1));
        cur++;
    }
    digitalout_toggle(leds[0]);

    cur = ram_start;
    digitalout_toggle(leds[1]);
    for(int i = 0; i < test_length; i++) {
        int temp = 0;
        BSP_SDRAM_ReadData((uint32_t)cur, (uint32_t)&temp, 1);
        if (fill_function(i) == temp) {
            test_success = 1; // continuing success
        } else {
            test_success = 0; // fail and break
            break;
        }
        cur++;
    }
    digitalout_toggle(leds[1]);

    if (test_success == 1) {
        digitalout_toggle(leds[2]);
    } else {
        digitalout_toggle(leds[3]);
    }
    return test_success;
}
