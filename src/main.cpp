/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

// Blinking rate in milliseconds
#define BLINKING_RATE_MS 50

DigitalOut led1(LED1);
DigitalOut led2(LED2);
Thread thread;

void led2_thread()
{
    while (true)
    {
        led2 = !led2;
        ThisThread::sleep_for(1000);
    }
}

int main()
{

    thread.start(led2_thread);

    while (true)
    {
        led1 = !led1;
        ThisThread::sleep_for(BLINKING_RATE_MS);
    }
}
