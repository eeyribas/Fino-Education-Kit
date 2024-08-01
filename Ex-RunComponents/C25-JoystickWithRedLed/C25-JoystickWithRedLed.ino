// If the X value of the joystick is greater than or equal to 700, turn on the yellow LED; 
// if the X value of the joystick is less than 700, turn off the yellow LED.

// The library belonging to the Fino Education Kit is included. 
#include "Fino.h"

// An object is instantiated from the Fino class.  
Fino fino; 


void setup()
{
// This code facilitates configuring the hardware settings of the Fino Education Kit. 
// With this code, the settings for buttons, LEDs, screen, speaker, joystick, and sensors of the Fino Education Kit are configured.
  fino.Init();  

// The hardware and display values are cleared.
  fino.Clear();
}


void loop()
{
// Reads the joystick X-axis value and compares.
  if (fino.ReadJoystickX() >= 700) {
// Red Led is on.
    fino.RedLedHigh();
  } else {
// Red Led is off.
    fino.RedLedLow();
  }
}