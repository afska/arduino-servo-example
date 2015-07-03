#ifndef ANALOGINPUTDEVICE_H_
#define ANALOGINPUTDEVICE_H_

#include "Arduino.h"

namespace devices {
	class AnalogInputDevice {
		//----
		public:
		//----
		static const int MIN = 0;
		static const int MAX = 1023;

		AnalogInputDevice(uint8_t pin);
		virtual ~AnalogInputDevice();

		int Read();
		int ReadInRange(int min, int max);

		//------
		private:
		//------
		uint8_t pin;
	};
}

#endif /* ANALOGINPUTDEVICE_H_ */
