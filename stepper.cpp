#include "stepper.h"
#include "led.h"

extern unsigned char ucInversion;

enum Step{LEFT,RIGHT};

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		LedCtr--;
		LedCtr = LedCtr % 4;
	}
	else if(eStep == RIGHT){
		LedCtr++;
		LedCtr = LedCtr % 4;
	}else{
	}
	if(ucInversion == 1)
		MyLedInv.On(LedCtr);
	else
		MyLed.On(LedCtr);
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}
