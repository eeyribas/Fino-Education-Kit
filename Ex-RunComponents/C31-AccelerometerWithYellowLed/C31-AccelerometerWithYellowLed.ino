// Writing a example that reads the value of the X axis from the accelerometer sensor, 
// turns on the yellow LED if the X value is less than (-50), and turns off the yellow LED 
// if the X value is greater than (50) or any other value. 

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
// Reads the accelerometer X-axis value and compares.
  if (fino.ReadAccelerometerX() < -50) {
// Yellow Led is on.
    fino.YellowLedHigh();
  } else if (fino.ReadAccelerometerX() > 50) {
// Yellow Led is off.
    fino.YellowLedLow();
  } else {
// Yellow Led is off.
    fino.YellowLedLow();
  }
}