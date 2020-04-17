#include "stepper.h"
#include "keyboard.h"

Stepper MyStepper;
Keyboard MyKeyboard;

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	KeyboardState eKeyboardState;

	if (MyKeyboard.eRead() == BUTTON_4)
	{
		MyStepper.SetMode(1);
	}
	else
	{
		MyStepper.SetMode(0);
	}
	
	while(1){
		Delay(500);
		eKeyboardState = MyKeyboard.eRead();
		switch(eKeyboardState)
		{
			case(BUTTON_1):
				MyStepper.StepRight();
			break;
			
			case(BUTTON_2):
				MyStepper.StepLeft();
			break;
			
			default:
			break;
		}
	}
}
