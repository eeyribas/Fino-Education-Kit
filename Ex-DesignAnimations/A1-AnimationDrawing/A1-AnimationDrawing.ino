// Coding a example that generates random animation on the screen.

// The library belonging to the Fino Education Kit is included.
#include "Fino.h"

// An object is instantiated from the Fino class.
Fino fino; 

// A value is defined for each area of the 8x8 screen. 
// 0 represents that the corresponding section of the screen is off, while 1 indicates it is on.
byte animation[] = {
  B01001000, 
  B00011000,
  B01000010,
  B00000010,
  B00011110,
  B00110100,
  B10000001,
  B00000110
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
// The value in the animation array is transferred to the screen.
  fino.SetRow(0, animation[0]); 
  fino.SetRow(1, animation[1]); 
  fino.SetRow(2, animation[2]); 
  fino.SetRow(3, animation[3]); 
  fino.SetRow(4, animation[4]);
  fino.SetRow(5, animation[5]); 
  fino.SetRow(6, animation[6]); 
  fino.SetRow(7, animation[7]); 
}