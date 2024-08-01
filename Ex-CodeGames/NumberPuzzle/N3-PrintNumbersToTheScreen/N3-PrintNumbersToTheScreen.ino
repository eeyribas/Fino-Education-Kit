// Number Puzzle - Print Numbers to the Screen

// The library belonging to the Fino Education Kit is included. 
#include "Fino.h"

// An object is instantiated from the Fino class.  
Fino fino;

// Arrays are created to display numbers on the screen.
byte clear_array[] = {
  B00000000, 
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
};

byte zero_number[] = {
  B00000000, 
  B01111110,
  B01000010,
  B01000010,
  B01000010,
  B01111110,
  B00000000,
  B00000000
};

byte one_number[] = {
  B00000000, 
  B00011000,
  B00101000,
  B00001000,
  B00001000,
  B00011100,
  B00000000,
  B00000000
};

byte two_number[] = {
  B00000000, 
  B01111110,
  B00000010,
  B01111110,
  B01000000,
  B01111110,
  B00000000,
  B00000000
};

byte three_number[] = {
  B00000000, 
  B01111110,
  B00000010,
  B00111110,
  B00000010,
  B01111110,
  B00000000,
  B00000000
};

byte four_number[] = {
  B00000000, 
  B01000010,
  B01000010,
  B01111110,
  B00000010,
  B00000010,
  B00000000,
  B00000000
};

byte five_number[] = {
  B00000000, 
  B01111110,
  B01000000,
  B01111110,
  B00000010,
  B01111110,
  B00000000,
  B00000000
};

byte six_number[] = {
  B00000000, 
  B01111110,
  B01000000,
  B01111110,
  B01000010,
  B01111110,
  B00000000,
  B00000000
};

byte seven_number[] = {
  B00000000, 
  B00111110,
  B00000100,
  B00001000,
  B00010000,
  B00100000,
  B00000000,
  B00000000
};

byte eight_number[] = {
  B00000000, 
  B01111110,
  B01000010,
  B01111110,
  B01000010,
  B01111110,
  B00000000,
  B00000000
};

byte nine_number[] = {
  B00000000, 
  B01111110,
  B01000010,
  B01111110,
  B00000010,
  B01111110,
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
  fino.SetIntensity(5);
}


void loop() 
{
  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, clear_array[i]);
  }

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, one_number[i]);
  }
            
  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, two_number[i]);
  }

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, three_number[i]);
  }

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, four_number[i]);
  }

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, five_number[i]);
  }

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, six_number[i]);
  }

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, seven_number[i]);
  }

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, eight_number[i]);
  }

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, nine_number[i]);
  }

  for (int i = 0; i < 8; i++) {
    fino.SetRow(i, zero_number[i]);
  }
}