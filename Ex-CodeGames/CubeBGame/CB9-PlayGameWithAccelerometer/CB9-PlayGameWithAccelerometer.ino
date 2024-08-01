// Cube B Game - Play the Game with an Accelerometer

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

// Defining direction parameters and time parameters.
const int UP = 0;
const int RIGHT = 1;
const int DOWN = 2;
const int LEFT = 3; 
int cubeb_direction = RIGHT;
int part_direction = DOWN;
int next_time = 0;                      
int delay_time = 1000;


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
  fino.SetIntensity(10);

// The accelerometer is initialized.
  fino.InitAccelerometre();

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
  int tilt_time = millis();

// The character can be controlled/directed using the accelerometer.
  if (fino.ReadAccelerometerX() <= -50) {
    cubeb_direction = LEFT;
    fino.YellowLedHigh();
    fino.RedLedLow();
    delay(10);
  } else if (fino.ReadAccelerometerX() >= 50) {
    cubeb_direction = RIGHT;
    fino.YellowLedLow();
    fino.RedLedHigh();
    delay(200);
  }

// This is the algorithm that enables the character to move.
  if (tilt_time - next_time >= delay_time) {
    switch (cubeb_direction) {
      case LEFT:
        if (bangle_y[1] < 7) {
          bangle_y[0] = bangle_y[0] + 1;
          bangle_y[1] = bangle_y[1] + 1;
          bangle_y[2] = bangle_y[2] + 1;
          bangle_y[3] = bangle_y[3] + 1;
        } else {
          bangle_y[0] = 6;
          bangle_y[1] = 7;
        }
      break;

      case RIGHT:
        if (bangle_y[1] > 1) {
          bangle_y[1] = bangle_y[1] - 1;
          bangle_y[0] = bangle_y[0] - 1;
          bangle_y[2] = bangle_y[2] - 1;
          bangle_y[3] = bangle_y[3] - 1;
        } else {
          bangle_y[0] = 0;
          bangle_y[1] = 1;
        }
        break;
    }

// This is the algorithm that enables the part to move.
    switch (part_direction) {
      case DOWN:
        if (part_x[0] < 8)
          part_x[0] = part_x[0] + 1;
        else
          part_x[0] = 0;
      break;
    }

    next_time = tilt_time;
  } 

// Game Over Controls
  if (bangle_x[0] == part_x[0] && bangle_y[0] == part_y[0]) {
    fino.Clear();

    bangle_x[0] = 6;
    bangle_y[0] = 4;
    bangle_x[1] = 6;
    bangle_y[1] = 5; 
    bangle_x[2] = 7;
    bangle_y[2] = 4; 
    bangle_x[3] = 7;
    bangle_y[3] = 5;

    part_x[0] = 0;
    part_y[0] = 4;

  } else if (bangle_x[1] == part_x[0] && bangle_y[1] == part_y[0]) {
    fino.Clear();

    bangle_x[0] = 6;
    bangle_y[0] = 4;
    bangle_x[1] = 6;
    bangle_y[1] = 5; 
    bangle_x[2] = 7;
    bangle_y[2] = 4; 
    bangle_x[3] = 7;
    bangle_y[3] = 5;

    part_x[0] = 0;
    part_y[0] = 4;

  } else if (bangle_x[2] == part_x[0] && bangle_y[2] == part_y[0]) {
    fino.Clear();

    bangle_x[0] = 6;
    bangle_y[0] = 4;
    bangle_x[1] = 6;
    bangle_y[1] = 5; 
    bangle_x[2] = 7;
    bangle_y[2] = 4; 
    bangle_x[3] = 7;
    bangle_y[3] = 5; 

    part_x[0] = 0;
    part_y[0] = 4;
    
  } else if(bangle_x[3] == part_x[0] && bangle_y[3] == part_y[0]) {
    fino.Clear();

    bangle_x[0] = 6;
    bangle_y[0] = 4;
    bangle_x[1] = 6;
    bangle_y[1] = 5; 
    bangle_x[2] = 7;
    bangle_y[2] = 4; 
    bangle_x[3] = 7;
    bangle_y[3] = 5;

    part_x[0] = 0;
    part_y[0] = 4;
  }

  fino.Clear();

// Drawing a character on an 8x8 Dot Matrix
  fino.SetDot(bangle_x[0], bangle_y[0], HIGH);
  fino.SetDot(bangle_x[1], bangle_y[1], HIGH);
  fino.SetDot(bangle_x[2], bangle_y[2], HIGH);
  fino.SetDot(bangle_x[3], bangle_y[3], HIGH);

// Drawing a part on an 8x8 Dot Matrix
  fino.SetDot(part_x[0], part_y[0], HIGH);  
}