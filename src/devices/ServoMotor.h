#ifndef SERVOMOTOR_H_
#define SERVOMOTOR_H_

#include "Arduino.h"
#include "Servo.h"

namespace devices {
	class ServoMotor {
		//----
		public:
		//----
		ServoMotor(uint8_t pin);
		virtual ~ServoMotor();

		void Rotate(int angle);

		//------
		private:
		//------
		Servo servo;
	};
}

#endif /* SERVOMOTOR_H_ */
