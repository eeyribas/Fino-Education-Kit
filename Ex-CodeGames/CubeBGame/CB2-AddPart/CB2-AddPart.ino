// Cube B Game - Add the Part

// The library belonging to the Fino Education Kit is included. 
#include "Fino.h"

// An object is instantiated from the Fino class.  
Fino fino;

// Creating an array for x and y axes in Bangle.
int bangle_x[4];
int bangle_y[4];                  

// Creating an array for x and y axes in part.
int part_x[1];                     
int part_y[1];


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
  
// Assigning values to arrays for Bangle drawings.
  bangle_x[0] = 6;
  bangle_y[0] = 4;
  bangle_x[1] = 6;
  bangle_y[1] = 5; 
  bangle_x[2] = 7;
  bangle_y[2] = 4; 
  bangle_x[3] = 7;
  bangle_y[3] = 5;

// Assigning values to arrays for part drawings.
  part_x[0] = 0;
  part_y[0] = 4;
}


void loop()
{
  fino.Clear();

// Drawing a character on an 8x8 Dot Matrix
  fino.SetDot(bangle_x[0], bangle_y[0], HIGH);
  fino.SetDot(bangle_x[1], bangle_y[1], HIGH);
  fino.SetDot(bangle_x[2], bangle_y[2], HIGH);
  fino.SetDot(bangle_x[3], bangle_y[3], HIGH);

// Drawing a part on an 8x8 Dot Matrix
  fino.SetDot(part_x[0], part_y[0], HIGH);  
}