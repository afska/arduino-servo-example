#include "ServoMotor.h"
#include "Servo.h"
using namespace devices;

ServoMotor::ServoMotor(uint8_t pin) {
	this->servo.attach(pin);
}

void ServoMotor::Rotate(int angle) {
	this->servo.write(angle);
}

ServoMotor::~ServoMotor() { }
