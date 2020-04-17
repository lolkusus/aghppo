#include "stepper.h"
#include "led.h"

extern Led MyLed;

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
	On(LedCtr);
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}
