#ifndef STEPPER_H
#define STEPPER_H
#include "led.h"
#include "ledinv.h"

class Stepper{
	public:
		void SetLed(Led *MyLedObject);
		void StepLeft(void);
		void StepRight(void);
	private:
		Led *pMyLed;
		unsigned char LedCtr;
		void Step(enum Step eStep);
};

#endif
