// Example code for generating musical notes.

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
// 1. Note
  fino.StartBuzzer(261);

// Puts it into sleep mode, waits for 1 seconds
  delay(1000);   

// It prevents sound output from the buzzer.
  fino.StopBuzzer();

// Puts it into sleep mode, waits for 0.5 seconds
  delay(500);        

 // 2. Note
  fino.StartBuzzer(277);
  delay(1000);   
  fino.StopBuzzer();
  delay(500);  

// 3. Note
  fino.StartBuzzer(294);
  delay(1000);   
  fino.StopBuzzer();  
  delay(500);  

// 4. Note
  fino.StartBuzzer(311);
  delay(1000);   
  fino.StopBuzzer();  
  delay(500);  

// 5. Note
  fino.StartBuzzer(330);
  delay(1000);   
  fino.StopBuzzer();  
  delay(500);  

// 6. Note
  fino.StartBuzzer(349);
  delay(1000);   
  fino.StopBuzzer();  
  delay(500);  

// 7. Note
  fino.StartBuzzer(370);
  delay(1000);   
  fino.StopBuzzer();  
  delay(500);  

// 8. Note
  fino.StartBuzzer(392);
  delay(1000);   
  fino.StopBuzzer();  
  delay(500);  

// 9. Note
  fino.StartBuzzer(415);
  delay(1000);   
  fino.StopBuzzer();  
  delay(500);  

// 10. Note
  fino.StartBuzzer(440);
  delay(1000);   
  fino.StopBuzzer();  
  delay(500); 
}