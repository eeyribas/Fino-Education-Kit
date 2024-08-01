// Writing code example that plays sound from the speaker if both the X and Y values of 
// the joystick are less than or equal to 300, and does not play sound if either X or Y 
// value is greater than 300.

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
  if (fino.ReadJoystickX() <= 300 && fino.ReadJoystickY() <= 300) {
// It enables sound output from the buzzer.
    fino.StartBuzzer(404);
  } else {
// It prevents sound output from the buzzer.
    fino.StopBuzzer(); 
  }
}