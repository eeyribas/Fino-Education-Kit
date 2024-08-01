// Writing code example that plays sound from the buzzer if the joystick's X value is less than 
// or equal to 300, and does not play sound if the joystick's X value is greater than 300.

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
// Reads the joystick Y-axis value and compares.
  if (fino.ReadJoystickY() <= 300) {
// It enables sound output from the buzzer.
    fino.StartBuzzer(404);
  } else {
// It prevents sound output from the buzzer.
    fino.StopBuzzer(); 
  }
}