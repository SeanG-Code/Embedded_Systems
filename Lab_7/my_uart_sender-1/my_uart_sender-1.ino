#include "myuart.h"
#define TXpin 10//feel free to change to your own pin
#define RXpin 11
MYUART myUART(TXpin, RXpin); // TX: Pin 10, RX: Pin 11

void setup() {
    myUART.begin(9600); // Initialize UART at 9600 baud
}

void loop() {
    myUART.sendData('A'); // Send character 'A'
    delay(1000);           // Wait 1 second before sending again
}
