// Writing code example to enable drawing and movement of an alien animation on the screen.

// The library belonging to the Fino Education Kit is included. 
#include "Fino.h"

// An object is instantiated from the Fino class.  
Fino fino;
 
// For each area of the 8x8 screen, values ​​are defined. 
// "0" indicates that the corresponding section of the screen is off, while "1" indicates it is on. 
byte animation_1[] = {
  B00000000, 
  B00000000,
  B01111110,
  B01011010,
  B01111110,
  B00100100,
  B00100100,
  B01100110
};

byte animation_2[] = {
  B00000000, 
  B01111110,
  B01011010,
  B01111110,
  B00100100,
  B00100100,
  B00100100,
  B00100100
};

byte animation_3[] = {
  B01111110, 
  B01011010,
  B01111110,
  B10100101,
  B01100110,
  B00000000,
  B00000000,
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
  for (int i = 0; i < 8; i++) {
// The animation image is drawn on the screen.
    fino.SetRow(i, animation_1[i]);
  }
// Puts it into sleep mode, waits for 1 seconds
  delay(1000);

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_2[i]);
  }
  delay(1000);
  
  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_3[i]);
  }
  delay(1000);
}