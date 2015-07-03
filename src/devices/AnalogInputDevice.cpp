#include "AnalogInputDevice.h"
using namespace devices;

AnalogInputDevice::AnalogInputDevice(uint8_t pin) {
	this->pin = pin;
}

int AnalogInputDevice::Read() {
	return analogRead(this->pin);
}

int AnalogInputDevice::ReadInRange(int min, int max) {
	return map(this->Read(), this->MIN, this->MAX, min, max);
}

AnalogInputDevice::~AnalogInputDevice() { }
