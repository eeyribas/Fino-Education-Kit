// Coding an example to make the Red LED light up for 2 seconds followed 
// by the Yellow LED turning off for 2 seconds, then the Red LED turning off 
// for 2 seconds followed by the Yellow LED lighting up for 2 seconds.

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
// Red Led is on.
  fino.RedLedHigh();
// Yellow Led is off.
  fino.YellowLedLow();

// Puts it into sleep mode, waits for 2 seconds
  delay(2000);

// Red Led is off.
  fino.RedLedLow();
// Yellow Led is on.
  fino.YellowLedHigh();

// Puts it into sleep mode, waits for 2 seconds
  delay(2000);
}