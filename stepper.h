#ifndef STEPPER_H
#define STEPPER_H

class Stepper {
	public:
		void StepLeft(void);
		void StepRight(void);
	private:
		unsigned char LedCtr;
		void Step(enum Step eStep);
};

#endif
