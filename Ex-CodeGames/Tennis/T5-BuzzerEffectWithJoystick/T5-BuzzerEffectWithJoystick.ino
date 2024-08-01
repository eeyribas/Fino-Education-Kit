// Tennis - Buzzer Effect with Joystick

// The library belonging to the Fino Education Kit is included. 
#include "Fino.h"

// An object is instantiated from the Fino class.  
Fino fino;

// Definiting rocket length
#define ROCKET_LENGTH   3

// Racket is defined along the x-axis.
byte rocket_x;

// Ball is defined the axises.
int ball_x;
int ball_y;
int next_ball_y;

   
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
}
 
 
void loop() 
{
// The timer starts.
  fino.Timer();

// The rocket is positioned according to the value read from the joystick.
  rocket_x = map(fino.ReadJoystickX(), 0, 1020, 8 - ROCKET_LENGTH, -1);

// The LED is controlled based on the joystick's X value.
  if (fino.ReadJoystickX() <= 300) {
    fino.StartBuzzer(500);
    fino.YellowLedHigh();
    fino.RedLedLow();
  } else if (fino.ReadJoystickX() >= 700) {
    fino.StopBuzzer();
    fino.YellowLedLow();
    fino.RedLedHigh();
  }

// Drawing a ball on an 8x8 Dot Matrix.
  fino.SetRow(ball_y, byte(1 << (ball_x)));

// The racket coordinates are found.
  byte rocket_coordinate = byte(0xFF >> (8 - ROCKET_LENGTH) << rocket_x);

// Drawing a rcoket on an 8x8 Dot Matrix.
  fino.SetRow(7, rocket_coordinate);

  delay(10);
}