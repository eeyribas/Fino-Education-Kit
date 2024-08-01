// When the top button is pressed, activate the buzzer and light up the yellow and red LEDs. 
// When the bottom button is pressed, deactivate the buzzer and turn off the yellow and red LEDs.

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
// Up button press control. If the button is pressed, the value returned is '1'.
  if (fino.ButtonUpMode() == 1) {
// It enables sound output from the buzzer.
    fino.StartBuzzer(1000);
// Red Led is on.
    fino.RedLedHigh();
// Yellow Led is on.
    fino.YellowLedHigh();
// Down button press control. If the button is pressed, the value returned is '1'.
  } else if (fino.ButtonDownMode() == 1) {
// It prevents sound output from the buzzer.
    fino.StopBuzzer();
// Red Led is off.
    fino.RedLedLow();
// Yellow Led is off.
    fino.YellowLedLow();
  }      
}