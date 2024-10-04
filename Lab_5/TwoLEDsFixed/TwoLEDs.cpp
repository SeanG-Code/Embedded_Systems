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
    for (int i = 0; i < _blinkCount+1; i++) {
        digitalWrite(_led1Pin, HIGH); // Turn on LED 1
        digitalWrite(_led2Pin, LOW);  // Turn off LED 2
        delay(1000 / (2 * _frequency));

        // Turn off LED 1
        digitalWrite(_led1Pin, LOW);
        // Turn on LED 2
        digitalWrite(_led2Pin, HIGH);
        //delay
        delay(1000 / (2 * _frequency));
    }
}

void TwoLEDs::turnOff() {
    // Turn off LED 1
    digitalWrite(_led1Pin, LOW);
    // Turn off LED 2
    digitalWrite(_led2Pin, LOW);
}

void TwoLEDs::setBlinkCount(int count) {
    //Serial.print("Please enter the number of blinks: ");
    //while (Serial.available() == 0) {}
    //count = Serial.parseInt();
    _blinkCount = count;
}

void TwoLEDs::setBlinkFrequency(int freq) {
    //Serial.print("Please enter the freq: ");
    //while (Serial.available() == 0) {}
    //freq = Serial.parseInt();
    _frequency = freq;
}

