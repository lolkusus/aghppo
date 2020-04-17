#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"

class Stepper{
	public:
		void StepLeft(void);
		void StepRight(void);
	private:
		Led MyLed;
		unsigned char LedCtr;
		void Step(enum Step eStep);
};

#endif
