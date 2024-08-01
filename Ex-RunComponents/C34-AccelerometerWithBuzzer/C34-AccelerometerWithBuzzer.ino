// A example that reads the values of the X and Y axes of an accelerometer sensor, and plays sound from 
// a buzzer if both X value and Y value are greater than (50), otherwise the speaker remains silent.

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
  if (fino.ReadAccelerometerY() > 50 && fino.ReadAccelerometerX() > 50) {
// It enables sound output from the buzzer.
    fino.StartBuzzer(150);
  } else {
// It prevents sound output from the buzzer.
    fino.StopBuzzer();
  }
}