#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"

class Stepper : public Led {
	public:
		Stepper(unsigned char ucInitState = 0);
		void StepLeft(void);
		void StepRight(void);
	private:
		unsigned char LedCtr;
		void Step(enum Step eStep);
};

#endif
