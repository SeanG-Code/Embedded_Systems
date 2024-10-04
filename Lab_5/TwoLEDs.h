#ifndef TWOLEDS_H
#define TWOLEDS_H

#include <Arduino.h>

class TwoLEDs {
public:
    TwoLEDs(int ctrl1, int ctrl2); //we will initialize ctrl1 as _led1Pin, ctrl2 as _led2Pin.
    void begin();// initialize the _led1Pin and _led2Pin as output using PinMODE
    void blink(); //blink LEDs at a default frequency of 2Hz, 50% duty cycle
    void turnOff(); //turn off both LEDs

private:
    int _led1Pin;
    int _led2Pin;
   
};

#endif
