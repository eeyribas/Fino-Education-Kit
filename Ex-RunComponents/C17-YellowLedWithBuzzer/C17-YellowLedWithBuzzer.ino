// Example code to generate sound from the buzzer and control the yellow LED on and off.

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
// It enables sound output from the buzzer.
  fino.StartBuzzer(1000);

// Yellow Led is on.
  fino.YellowLedHigh();

// Puts it into sleep mode, waits for 2 seconds.
  delay(2000);   

// It prevents sound output from the buzzer.
  fino.StopBuzzer();

// Yellow Led is off.
  fino.YellowLedLow();

// Puts it into sleep mode, waits for 2 seconds.
  delay(2000);
}