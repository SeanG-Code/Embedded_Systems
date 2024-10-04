#include <TwoLEDs.h>

const int led1Pin = 2;
const int led2Pin = 3;

TwoLEDs blinkLEDs(led1Pin, led2Pin);

void setup() {
  Serial.begin(9600);
    blinkLEDs.begin();          
    blinkLEDs.setBlinkFrequency(2); 
    blinkLEDs.setBlinkCount(10);
}

void loop() {
    blinkLEDs.blink(); 
    blinkLEDs.turnOff(); 
    delay(1000); 
}
