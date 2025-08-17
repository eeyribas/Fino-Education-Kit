// An example code that reads the values of the X axis and Y axis from an accelerometer sensor, 
// and performs the following actions: if both X value and Y value are less than (-50), it lights up 
// the red LED and turns off the yellow LED; if both X value and Y value are greater than (50), 
// it turns off the red LED and lights up the yellow LED; in all other cases, it turns off both LEDs.

// The library belonging to the Fino Education Kit is included. 
#include "Fino.h"

// An object is instantiated from the Fino class.  
Fino fino;


void setup()
{
// The accelerometer is initialized.
  fino.InitAccelerometre();

// This code facilitates configuring the hardware settings of the Fino Education Kit. 
// With this code, the settings for buttons, LEDs, screen, speaker, joystick, and sensors of the Fino Education Kit are configured.
  fino.Init();  

// The hardware and display values are cleared.
  fino.Clear();
}


void loop()
{
// Reads the accelerometer X-axis and Y-axis values and compares.
  if (fino.ReadAccelerometerY() < -50 && 
      fino.ReadAccelerometerX() < -50) {
// Red Led is on.
    fino.RedLedHigh();
// Yellow Led is off.
    fino.YellowLedLow();
  } else if (fino.ReadAccelerometerY() > 50 && 
             fino.ReadAccelerometerX() > 50) {
// Red Led is off.
    fino.RedLedLow();
// Yellow Led is on.
    fino.YellowLedHigh();
  } else {
// Red Led is off.
    fino.RedLedLow();
// Yellow Led is off.
    fino.YellowLedLow();
  }
}