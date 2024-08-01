// Example code for generating sound from a buzzer.

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
// It enables sound output from the buzzer. The value 1000 in the code represents a sound with a frequency of 1 kHz.
  fino.StartBuzzer(1000);

// Puts it into sleep mode, waits for 1 seconds
  delay(1000);   

// It prevents sound output from the buzzer.. 
  fino.StopBuzzer();

// Puts it into sleep mode, waits for 1 seconds
  delay(1000);        
}