#include <TwoLEDs.h>

const int led1Pin = 2;
const int led2Pin = 3;

TwoLEDs blinkLEDs(led1Pin, led2Pin);

void setup() {
    blinkLEDs.begin(); 
}

void loop() {
    blinkLEDs.blink(); // Blink the LEDs 
    blinkLEDs.turnOff(); // Turn off both LEDs
    delay(1000); // Wait before starting again
}
