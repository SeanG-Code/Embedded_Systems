#include "myuart.h"
#define TXpin 10
#define RXpin 11

MYUART myUART(TXpin, RXpin); // TX: Pin 10, RX: Pin 11

void setup() {
    Serial.begin(9600);    // Start the Serial Monitor
    myUART.begin(9600);    // Initialize UART at 9600 baud
}

void loop() {
    uint8_t received = myUART.receiveData(); // Receive a byte
    Serial.print("Received: ");
    Serial.println((char)received); // Print received character
}
