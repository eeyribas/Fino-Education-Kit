// An example code for creating an animation with five frame playing at one second intervals on the screen.

// The library belonging to the Fino Education Kit is included. 
#include "Fino.h"

// An object is instantiated from the Fino class.  
Fino fino; 
 
// For each area of the 8x8 screen, values ​​are defined. 
// "0" indicates that the corresponding section of the screen is off, while "1" indicates it is on. 
// The first animation image array is created.
byte animation_1[] = {
  B00000000, 
  B00010000,
  B00011000,
  B11111100,
  B11111100,
  B00011000,
  B00010000,
  B00000000
};
 
// The second animation image array is created.
byte animation_2[] = {
  B00000000, 
  B00000010,
  B00000011,
  B10011111,
  B10011111,
  B00000011,
  B00000010,
  B00000000
};

// The third animation image array is created.
byte animation_3[] = {
  B00000000, 
  B01000000,
  B01100000,
  B11110011,
  B11110011,
  B01100000,
  B01000000,
  B00000000
};

// The fourth animation image array is created.
byte animation_4[] = {
  B00000000, 
  B00001000,
  B00001100,
  B01111110,
  B01111110,
  B00001100,
  B00001000,
  B00000000
};

// The fifth animation image array is created.
byte animation_5[] = {
  B00000000, 
  B00000001,
  B10000001,
  B11001111,
  B11001111,
  B10000001,
  B00000001,
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
// The first animation image is drawn on the screen.
  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_1[i]);
  }

// Puts it into sleep mode, waits for 5 seconds
  delay(1000);

// The second animation image is drawn on the screen.
  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_2[i]);
  }

// Puts it into sleep mode, waits for 5 seconds
  delay(1000);

// The third animation image is drawn on the screen.
  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_3[i]);
  }

// Puts it into sleep mode, waits for 5 seconds
  delay(1000);

// The fourth animation image is drawn on the screen.
  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_4[i]);
  }

// Puts it into sleep mode, waits for 5 seconds
  delay(1000);

  // The fifth animation image is drawn on the screen.
  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_5[i]);
  }

// Puts it into sleep mode, waits for 5 seconds
  delay(1000);
}