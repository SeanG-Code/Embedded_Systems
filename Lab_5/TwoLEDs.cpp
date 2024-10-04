#include "TwoLEDs.h"

TwoLEDs::TwoLEDs(int ctrl1, int ctrl2) {
    _led1Pin = ctrl1;
    _led2Pin = ctrl2;
}

void TwoLEDs::begin() {
    pinMode(_led1Pin , OUTPUT); 
    // Initialize the _led2Pin as output
    pinMode(_led2Pin, OUTPUT);

}

// Blink the LEDs with the default frequency of 2Hz, 50% duty cycle
void TwoLEDs::blink() {
        digitalWrite(_led1Pin, HIGH); // Turn on LED 1
        digitalWrite(_led2Pin, LOW);  // Turn off LED 2
        delay(250);

        // Turn off LED 1
        digitalWrite(_led1Pin, LOW);
        // Turn on LED 2
        digitalWrite(_led2Pin, HIGH);
        //delay
        delay(250);
}

void TwoLEDs::turnOff() {
    // Turn off LED 1
    digitalWrite(_led1Pin, LOW);
    // Turn off LED 2
    digitalWrite(_led2Pin, LOW;
}

