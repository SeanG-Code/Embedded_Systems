#ifndef MYUART_H
#define MYUART_H

#include <Arduino.h>

class MYUART {
public:
    MYUART(uint8_t txPin, uint8_t rxPin); // Constructor
    void begin(long baudRate);          // Initialize UART
    void sendData(uint8_t data);        // Send a byte (8 bits)
    uint8_t receiveData();              // Receive a byte (8 bits)

private:
    uint8_t _txPin, _rxPin;
    unsigned long _bitDelay;            // Bit duration in microseconds

    void sendBit(bool bit);             // Send a single bit
    bool readBit();                     // Read a single bit
};

#endif // MYUART_H
