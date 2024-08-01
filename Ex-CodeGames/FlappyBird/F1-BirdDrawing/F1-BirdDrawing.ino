// Flappy Bird - The Drawing of the Bird

// The library belonging to the Fino Education Kit is included. 
#include "Fino.h"

// An object is instantiated from the Fino class.  
Fino fino;

// Bird's coordinate arrays are defined.
int bird_x[2];
int bird_y[2];                 


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

// The bird's coordinate values are defined.
  bird_x[0] = 3;
  bird_y[0] = 5;
  bird_x[1] = 4;
  bird_y[1] = 6;
}


void loop()
{
  fino.Clear();

// The bird's drawing is carried out.
  fino.SetDot(bird_x[0], bird_y[0], HIGH);
  fino.SetDot(bird_x[1], bird_y[1], HIGH);
}