#define BOUNCE_WITH_PROMPT_DETECTION
#include <Bounce2.h>
#include <Joystick.h>
#define BUTTON_COUNT 18
#define BOUNCE_INTERVAL 5

Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID,JOYSTICK_TYPE_GAMEPAD,
  BUTTON_COUNT, 0,                  // Button Count, Hat Switch Count
  false, false, false,     // X and Y, but no Z Axis
  false, false, false,   // No Rx, Ry, or Rz
  false, false,          // No rudder or throttle
  false, false, false);  // No accelerator, brake, or steering

uint8_t buttonPin[] = {0,1,2,3,4,5,6,7,8,9,10,14,15,16,18,19,20,21}; 

Bounce buttonBounce[BUTTON_COUNT];
bool buttonState[BUTTON_COUNT];
bool previousState[BUTTON_COUNT];

void setup() {

 for (int i = 0; i < BUTTON_COUNT; i++){
   buttonBounce[i] = Bounce();
   buttonBounce[i].attach(buttonPin[i], INPUT_PULLUP);
   buttonBounce[i].interval(BOUNCE_INTERVAL);
   buttonState[i] = false;
   previousState[i] = false;
  }
  Joystick.begin();

}

void loop() {

  for (int i = 0; i < BUTTON_COUNT; i++){
   buttonBounce[i].update();
   buttonState[i] = (buttonBounce[i].read() == LOW);
   
   if (buttonState[i] && !previousState[i]) { 
    Joystick.setButton(i, buttonState[i]);
   } else if (!buttonState[i] && previousState[i]) {
    Joystick.setButton(i, buttonState[i]);
   }
   previousState[i] = buttonState[i];
  }
  
}
