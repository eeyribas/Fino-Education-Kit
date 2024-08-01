// An example code for generating an image view on the screen.

// The library belonging to the Fino Education Kit is included. 
#include "Fino.h"

// An object is instantiated from the Fino class.  
Fino fino; 
 
// For each area of the 8x8 screen, values ​​are defined. 
// "0" indicates that the corresponding section of the screen is off, while "1" indicates it is on. 
// Image view is created.
byte animation[] = {
  B00000000, 
  B11111110,
  B11011110,
  B00001110,
  B00100110,
  B00001010,
  B11101010,
  B10011110
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
// The values in the animation array is transferred to the screen.
  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation[i]);
  }
}