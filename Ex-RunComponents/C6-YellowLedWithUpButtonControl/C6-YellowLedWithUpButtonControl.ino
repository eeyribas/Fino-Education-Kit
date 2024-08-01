// Coding an example where pressing the top button lights up the yellow LED, and otherwise, turns it off.

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
// Button press control. If the button is pressed, the value returned is '1'.
  if (fino.ButtonUpMode() == 1) {
// Yellow Led is on.
    fino.YellowLedHigh();
  } else {
// Yellow Led is off.
    fino.YellowLedLow();
  }
}