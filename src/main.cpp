/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "platform/mbed_thread.h"

// Blinking rate in milliseconds
#define BLINKING_RATE_MS 50

int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led(LED1);
    DigitalOut led2(LED2);
    DigitalOut led3(LED3);
    led2 = 1;

    while (true)
    {
        led = !led;
        led2 = !led2;
        led3 = !led3;
        thread_sleep_for(BLINKING_RATE_MS);
    }
}
