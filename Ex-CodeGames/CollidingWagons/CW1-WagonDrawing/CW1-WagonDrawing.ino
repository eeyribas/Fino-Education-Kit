// Colliding Wagons - Wagon Drawing

// The library belonging to the Fino Education Kit is included. 
#include "Fino.h"

// An object is instantiated from the Fino class.  
Fino fino;

// Creating an array for x and y axes in Wagon.
int wagon_x[5];
int wagon_y[5];                 


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
  fino.SetIntensity(8);

// Assigning values to arrays for Wagon drawings.
  wagon_x[0] = 5;
  wagon_y[0] = 3;
  wagon_x[1] = 5;
  wagon_y[1] = 4;
  wagon_x[2] = 5;
  wagon_y[2] = 5;
  wagon_x[3] = 4;
  wagon_y[3] = 3;
  wagon_x[4] = 4;
  wagon_y[4] = 5;
}


void loop()
{
  fino.Clear();

// Drawing a wagon on an 8x8 Dot Matrix
  fino.SetDot(wagon_x[0], wagon_y[0], HIGH);
  fino.SetDot(wagon_x[1], wagon_y[1], HIGH);
  fino.SetDot(wagon_x[2], wagon_y[2], HIGH);
  fino.SetDot(wagon_x[3], wagon_y[3], HIGH);
  fino.SetDot(wagon_x[4], wagon_y[4], HIGH);
}