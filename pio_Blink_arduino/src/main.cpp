/*
test, ch32v003, led blink on platformio, using arduino framework
Reference:
1. ch32fun/examples/blink/blink.c at custom/main · YuukiUmeta-UIAP/ch32fun
https://github.com/YuukiUmeta-UIAP/ch32fun/blob/custom/main/examples/blink/blink.c
2. platform-ch32v/examples/blinky-arduino-ch32v003/src/main.cpp at develop · Community-PIO-CH32V/platform-ch32v
https://github.com/Community-PIO-CH32V/platform-ch32v/blob/develop/examples/blinky-arduino-ch32v003/src/main.cpp
3. platform-ch32v/examples/ch32fun-blink at develop · Community-PIO-CH32V/platform-ch32v
https://github.com/Community-PIO-CH32V/platform-ch32v/tree/develop/examples/ch32fun-blink
*/
#include <Arduino.h>

/* PC1 as blinky LED, change here as needed */
//#define LED C1
#define LED 2

void setup() {
    pinMode(LED, OUTPUT);
}

void loop() {
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
}