#ifndef KEYBOARD_H
#define KEYBOARD_H

typedef enum KeyboardState{
	RELASED, 
	BUTTON_1, 
	BUTTON_2, 
	BUTTON_3, 
	BUTTON_4
}KeyboardState;

class Keyboard {
	public:
		void Init(void);
		enum KeyboardState eRead(void);
};

#endif
