// Writing a code example that reads the values of the X and Y axes from an accelerometer sensor and 
// displays these values on the terminal screen. 

// The library belonging to the Fino Education Kit is included. 
#include "Fino.h"

// An object is instantiated from the Fino class.  
Fino fino; 


void setup()
{
//Code to initialize the terminal screen with a baud rate of 9600.
  Serial.begin(9600);

// The accelerometer is initialized.
  fino.InitAccelerometre();

// This code facilitates configuring the hardware settings of the Fino Education Kit. 
// With this code, the settings for buttons, LEDs, screen, speaker, joystick, and sensors of the Fino Education Kit are configured.
  fino.Init();  

// The hardware and display values are cleared.
  fino.Clear();
}


void loop()
{
  Serial.print("X=");

// Reads the accelerometer X-axis value and prints it to the terminal screen.
  Serial.print(fino.ReadAccelerometerX());

  Serial.print(" Y=");

// Reads the accelerometer Y-axis value and prints it to the terminal screen.
  Serial.println(fino.ReadAccelerometerY());

// Puts it into sleep mode, waits for 1 seconds
  delay(1000);
}