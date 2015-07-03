#include "Arduino.h"
#include "devices/AnalogInputDevice.h"
#include "devices/ServoMotor.h"
using namespace devices;

int main() {
	init(); setup();
	for (;;) loop();
	return 0;
}

AnalogInputDevice* pot;
ServoMotor* servoMotor;

void setup() {
	pot = new AnalogInputDevice(A0);
	servoMotor = new ServoMotor(9);
	Serial.begin(9600);
}

void loop() {
	int angle = pot->ReadInRange(0, 179);
	Serial.println(angle);
	servoMotor->Rotate(angle);
	delay(15);
}
