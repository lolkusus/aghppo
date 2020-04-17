#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"
#include "ledinv.h"

class Stepper{
	public:
		void SetMode(unsigned char ucInvertionMode);
		void StepLeft(void);
		void StepRight(void);
	private:
		Led MyLed;
		LedInv MyLedInv;
		unsigned char ucInversion;
		unsigned char LedCtr;
		void Step(enum Step eStep);
};

#endif
