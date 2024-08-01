// Writing a example that reads the value of the Y axis from the accelerometer sensor, turns on the red LED 
// if the Y value is less than (-50), and turns off the red LED if the Y value is greater than (50) or any 
// other value.

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
// Reads the accelerometer Y-axis value and compares.
  if (fino.ReadAccelerometerY() < -50) {
// Red Led is on.
    fino.RedLedHigh();
  } else if (fino.ReadAccelerometerY() > 50) {
// Red Led is off.
    fino.RedLedLow();
  } else {
// Red Led is off.
    fino.RedLedLow();
  }
}