// Creating an animation example that allows arrows drawn on the screen to be moved using a joystick.

// The library belonging to the Fino Education Kit is included. 
#include "Fino.h"

// An object is instantiated from the Fino class.  
Fino fino; 

// For each area of the 8x8 screen, values ​​are defined. 
// "0" indicates that the corresponding section of the screen is off, while "1" indicates it is on. 
byte up_ok[] = {
  B00000000, 
  B00011000,
  B00111100,
  B01111110,
  B00011000,
  B00011000,
  B00011000,
  B00000000
};

byte left_ok[] = {
  B00000000, 
  B00010000,
  B00110000,
  B01111110,
  B01111110,
  B00110000,
  B00010000,
  B00000000
};

byte right_ok[] = {
  B00000000, 
  B00001000,
  B00001100,
  B01111110,
  B01111110,
  B00001100,
  B00001000,
  B00000000
};

byte down_ok[] = {
  B00000000, 
  B00011000,
  B00011000,
  B00011000,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};


void setup()
{
// This code facilitates configuring the hardware settings of the Fino Education Kit. 
// With this code, the settings for buttons, LEDs, screen, speaker, joystick, and sensors of the Fino Education Kit are configured.
  fino.Init();  

// This code ensures the deletion of the image on the screen. 
// Sometimes, image information may remain on the screen, which can be misleading when starting to write a new code program.
  fino.Clear();

// This is the code that adjusts the brightness of the screen. 
// Brightness ranges from 0 to 15.
  fino.SetIntensity(15); 
}


void loop()
{
// Reads the joystick X-axis and Y-axis values
  if(fino.ReadJoystickX() <= 300){
// The animation image is drawn on the screen.
    for (int i = 0; i < 8; i++) {
      fino.SetRow(i, up_ok[i]);
    }
  } else if(fino.ReadJoystickX() >= 700) {
    for (int i = 0; i < 8; i++) {
      fino.SetRow(i, left_ok[i]);
    }
  } else if(fino.ReadJoystickY() <= 300) {
    for (int i = 0; i < 8; i++) {
      fino.SetRow(i, right_ok[i]);
    }
  } else if(fino.ReadJoystickY() >= 700) {
    for (int i = 0; i < 8; i++) {
      fino.SetRow(i, down_ok[i]);
    }
  } 
}