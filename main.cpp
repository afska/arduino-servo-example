#include "Arduino.h"
#include "AnalogInputDevice.h"
#include "Servo.h"

int main() {
	init(); setup();
	for (;;) loop();
	return 0;
}

AnalogInputDevice* pot;
Servo servo;

void setup() {
	pot = new AnalogInputDevice(A0);
	servo.attach(9);
	Serial.begin(9600);
}

void loop() {
	int angle = pot->ReadInRange(0, 179);
	Serial.println(angle);
	servo.write(angle);
	delay(15);
}
