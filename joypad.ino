/*
   ___         _           _   ___             _
  / __|___ _ _| |_ _ _ ___| | | __| _ ___ __ _| |__
 | (__/ _ \ ' \  _| '_/ _ \ | | _| '_/ -_) _` | / /
  \___\___/_||_\__|_| \___/_| |_||_| \___\__,_|_\_\

  https://hackaday.io/project/170908-control-freak

  Danjovic 2020

  PC Joystick - 12/04/2020
*/
#include "HID-Project.h"
// Button Pinout
#define BT_0  0 
#define BT_1  1
#define BT_2  2
#define BT_3  3
#define BT_4  4
#define BT_5  5 
#define BT_6  6
#define BT_7  7
#define BT_8  8
#define BT_9  9
#define BT_10 10
#define BT_11 21
#define BT_12 20
#define BT_13 19
#define BT_14 18
#define BT_15 15
#define BT_16 14
#define BT_17 16
uint8_t buttonPins[] = {BT_0, BT_1, BT_2, BT_3, BT_4, BT_5, BT_6, BT_7, BT_8, BT_9, BT_10, BT_11, BT_12, BT_13, BT_14, BT_15, BT_16, BT_17 };
uint8_t buttonCount = sizeof(buttonPins) / sizeof(buttonPins[0]);

#define holdCaps()    DDRF  = 0xf0
#define releaseCaps() DDRF  = 0x00
#define pullupsOff()  PORTF = 0x00


//    _ _ _                 _
//   | (_) |__ _ _ __ _ _ _(_)___ ___
//   | | | '_ \ '_/ _` | '_| / -_|_-<
//   |_|_|_.__/_| \__,_|_| |_\___/__/
//
#include "HID-Project.h"

#define maxCounts     1024
#define midRange       200

//#define DEBUG



//    ___      _
//   / __| ___| |_ _  _ _ __
//   \__ \/ -_)  _| || | '_ \
//   |___/\___|\__|\_,_| .__/
//                     |_|
void setup() {

  pullupsOff(); // turn off pullups
  holdCaps();   // start with caps discharged

    pinMode(BT_0, INPUT_PULLUP);
    pinMode(BT_1, INPUT_PULLUP);
    pinMode(BT_2, INPUT_PULLUP);
    pinMode(BT_3, INPUT_PULLUP);
    pinMode(BT_4, INPUT_PULLUP);
    pinMode(BT_5, INPUT_PULLUP);
    pinMode(BT_6, INPUT_PULLUP);
    pinMode(BT_7, INPUT_PULLUP);
    pinMode(BT_8, INPUT_PULLUP);
    pinMode(BT_9, INPUT_PULLUP);
    pinMode(BT_10, INPUT_PULLUP);
    pinMode(BT_11, INPUT_PULLUP);
    pinMode(BT_12, INPUT_PULLUP);
    pinMode(BT_13, INPUT_PULLUP);
    pinMode(BT_14, INPUT_PULLUP);
    pinMode(BT_15, INPUT_PULLUP);
    pinMode(BT_16, INPUT_PULLUP);
    pinMode(BT_17, INPUT_PULLUP);
   
  // Sends a clean report to the host. This is important on any Arduino type.
  Gamepad.begin();
  
#if defined (DEBUG)  
  Serial.begin(9600);
#endif
}


//    __  __      _        _
//   |  \/  |__ _(_)_ _   | |   ___  ___ _ __
//   | |\/| / _` | | ' \  | |__/ _ \/ _ \ '_ \
//   |_|  |_\__,_|_|_||_| |____\___/\___/ .__/
//                                      |_|
void loop() {

  // Start with a clean slate
  Gamepad.releaseAll(); 

   if (digitalRead(BT_0) == 0) Gamepad.press(1);
   if (digitalRead(BT_1) == 0) Gamepad.press(2);
   if (digitalRead(BT_2) == 0) Gamepad.press(3);
   if (digitalRead(BT_3) == 0) Gamepad.press(4);
   if (digitalRead(BT_4) == 0) Gamepad.press(5);
   if (digitalRead(BT_5) == 0) Gamepad.press(6);
   if (digitalRead(BT_6) == 0) Gamepad.press(7);
   if (digitalRead(BT_7) == 0) Gamepad.press(8);
   if (digitalRead(BT_8) == 0) Gamepad.press(9);
   if (digitalRead(BT_9) == 0) Gamepad.press(10);
   if (digitalRead(BT_10) == 0) Gamepad.press(11);
   if (digitalRead(BT_11) == 0) Gamepad.press(12);
   if (digitalRead(BT_12) == 0) Gamepad.press(13);
   if (digitalRead(BT_13) == 0) Gamepad.press(14);
   if (digitalRead(BT_14) == 0) Gamepad.press(15);
   if (digitalRead(BT_15) == 0) Gamepad.press(16);
   if (digitalRead(BT_16) == 0) Gamepad.press(17);
   if (digitalRead(BT_17) == 0) Gamepad.press(18);
 
  Gamepad.write();

#if defined (DEBUG) 
   
#endif

  // Simple debounce
  delay(10);

}
