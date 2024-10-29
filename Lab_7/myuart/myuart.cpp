#include "myuart.h"

MYUART::MYUART(uint8_t txPin, uint8_t rxPin) {
	_txPin = txPin;
	_rxPin = rxPin;
	pinMode(_txPin, OUTPUT);
	pinMode(_rxPin, INPUT);
}

void MYUART::begin(long baudRate) {
	_bitDelay = 1000000 / baudRate;
	digitalWrite(_txPin, HIGH);
}

void MYUART::sendData(uint8_t data) {
	sendBit(0);
	for (int i = 0; i < 8; i++) {
		sendBit((data >> i) & 0x01 );
	}
	sendBit(1);
}

uint8_t MYUART::receiveData() {
	uint8_t data = 0;
	while (digitalRead(_rxPin) == 1);
	delayMicroseconds(_bitDelay/2);
	for (int i = 0; i < 8; i++) {
		bool bit = readBit();
		data |= (bit << i);
	}
	return data;
}

void MYUART::sendBit(bool bit) {
	digitalWrite(_txPin, bit);
	delayMicroseconds(_bitDelay);
}

bool MYUART::readBit() {
	delayMicroseconds(_bitDelay);
	return digitalRead(_rxPin);
}
