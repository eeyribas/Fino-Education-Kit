// Writing code example to enable drawing and movement of a domino animation on the screen.

// The library belonging to the Fino Education Kit is included. 
#include "Fino.h"

// An object is instantiated from the Fino class.  
Fino fino;
 
// For each area of the 8x8 screen, values ​​are defined. 
// "0" indicates that the corresponding section of the screen is off, while "1" indicates it is on. 
byte animation_1[] = {
  B11111111, 
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B11111111
};

byte animation_2[] = {
  B11111110, 
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B11111111
};

byte animation_3[] = {
  B11111100, 
  B11111110,
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B11111111
};

byte animation_4[] = {
  B11111000, 
  B11111100,
  B11111110,
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B11111111
};

byte animation_5[] = {
  B11110000, 
  B11111000,
  B11111100,
  B11111110,
  B11111111,
  B11111111,
  B11111111,
  B11111111
};

byte animation_6[] = {
  B11100000, 
  B11110000,
  B11111000,
  B11111100,
  B11111110,
  B11111111,
  B11111111,
  B11111111
};

byte animation_7[] = {
  B11000000, 
  B11100000,
  B11110000,
  B11111000,
  B11111100,
  B11111110,
  B11111111,
  B11111111
};

byte animation_8[] =
{
  B10000000, 
  B11000000,
  B11100000,
  B11110000,
  B11111000,
  B11111100,
  B11111110,
  B11111111
};

byte animation_9[] = {
  B00000000, 
  B10000000,
  B11000000,
  B11100000,
  B11110000,
  B11111000,
  B11111100,
  B11111110
};

byte animation_10[] = {
  B00000000, 
  B00000000,
  B10000000,
  B11000000,
  B11100000,
  B11110000,
  B11111000,
  B11111100
};

byte animation_11[] = {
  B00000000, 
  B00000000,
  B00000000,
  B10000000,
  B11000000,
  B11100000,
  B11110000,
  B11111000
};

byte animation_12[] = {
  B00000000, 
  B00000000,
  B00000000,
  B00000000,
  B10000000,
  B11000000,
  B11100000,
  B11110000
};

byte animation_13[] = {
  B00000000, 
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B10000000,
  B11000000,
  B11100000
};

byte animation_14[] = {
  B00000000, 
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B10000000,
  B11000000
};

byte animation_15[] = {
  B00000000, 
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B10000000
};

byte animation_16[] = {
  B00000000, 
  B00000000,
  B00000000,
  B00000000,
  B00000000,
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
// Puts it into sleep mode, waits for 0.1 seconds
  delay(100);

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_2[i]);
  }
  delay(100);

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_3[i]);
  }
  delay(100);

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_4[i]);
  }
  delay(100);

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_5[i]);
  }
  delay(100);

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_6[i]);
  }
  delay(100);

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_7[i]);
  }
  delay(100);

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_8[i]);
  }
  delay(100);

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_9[i]);
  }
  delay(100);

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_10[i]);
  }
  delay(100);

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_11[i]);
  }
  delay(100);

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_12[i]);
  }
  delay(100);

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_13[i]);
  }
  delay(100);

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_14[i]);
  }
  delay(100);

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_15[i]);
  }
  delay(100);

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, animation_16[i]);
  }
  delay(100);
}