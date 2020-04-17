
enum LedState {STEP_LEFT, STEP_RIGHT, LED_STOP};

void LedInit(void);
void LedOn(unsigned char ucLedIndex);
void LedStep(enum Step eStep);
void LedStepLeft(void);
void LedStepRight(void);
void LedInit(void);
