#ifndef LED_H
#define LED_H

class Led {
	public:
		void Init(void);
		void StepLeft(void);
		void StepRight(void);
	private:
		unsigned char ucLedIndexStep;
		void On(unsigned char ucLedIndex);
		void Step(enum Step eStep);
};

#endif
