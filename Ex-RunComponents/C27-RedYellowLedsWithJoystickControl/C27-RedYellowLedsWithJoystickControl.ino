// Writing code example that turns on the yellow and red LEDs if both the X and Y values of 
// the joystick are greater than or equal to 700, and turns off the yellow and red LEDs 
// if either X or Y values are less than 700.

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
// Reads the joystick X-axis and Y-axis values and compares.
  if (fino.ReadJoystickX() >= 700 && fino.ReadJoystickY() >= 700) {
// Red Led is on.
    fino.RedLedHigh();
// Yellow Led is on.
    fino.YellowLedHigh();
  } else {
// Red Led is off.
    fino.RedLedLow();
// Yellow Led is off.
    fino.YellowLedLow();
  }
}