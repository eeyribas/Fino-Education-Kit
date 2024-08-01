// Example code that reads the X and Y axis values from a joystick and displays these values on 
// the terminal screen.

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

//Code to initialize the terminal screen with a baud rate of 9600.
  Serial.begin(9600);
}


void loop()
{
  Serial.print("X: ");

// Reads the joystick X-axis value and prints it to the terminal screen.
  Serial.print(fino.ReadJoystickX());

  Serial.print(" | Y: ");

// Reads the joystick Y-axis value and prints it to the terminal screen.
  Serial.print(fino.ReadJoystickY());

// To move text to a new line on the terminal screen.
  Serial.println();

// Puts it into sleep mode, waits for 1 seconds
  delay(1000);
}