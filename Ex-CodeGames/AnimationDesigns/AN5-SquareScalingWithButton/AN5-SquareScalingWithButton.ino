// Writing code example to enable moving a square animation drawn on the screen using a button.

// The library belonging to the Fino Education Kit is included. 
#include "Fino.h"

// An object is instantiated from the Fino class.  
Fino fino;
 
// For each area of the 8x8 screen, values ​​are defined. 
// "0" indicates that the corresponding section of the screen is off, while "1" indicates it is on. 
byte animation_1[] = {
  B11111111, 
  B10000001,
  B10000001,
  B10000001,
  B10000001,
  B10000001,
  B10000001,
  B11111111
};

byte animation_2[] = {
  B11111111, 
  B11111111,
  B11111111,
  B11100111,
  B11100111,
  B11111111,
  B11111111,
  B11111111
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
// Button press control. If the button is pressed, the value returned is '1'.
  if (fino.ButtonUpMode() == 1) {
    for (int i = 0; i < 8; i++) {
// The animation image is drawn on the screen.
      fino.SetRow(i, animation_1[i]);
    }
  } else {
    for (int i = 0; i < 8; i++) {
      fino.SetRow(i, animation_2[i]);
    }
  }
}