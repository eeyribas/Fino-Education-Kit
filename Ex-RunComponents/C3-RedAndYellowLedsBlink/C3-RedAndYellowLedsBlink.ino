// Coding an example to make the red and yellow LEDs blink for 2 seconds.

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
// Red and yellow Leds are on.
  fino.RedLedHigh();
  fino.YellowLedHigh();

// Puts it into sleep mode, waits for 2 seconds
  delay(2000);

// Red and yellow Leds are off.
  fino.RedLedLow();
  fino.YellowLedLow();

// Puts it into sleep mode, waits for 2 seconds
  delay(2000);
}