// Snake - Apple Drawing

// The library belonging to the Fino Education Kit is included. 
#include "Fino.h"

// An object is instantiated from the Fino class.  
Fino fino;

// Snake's coordinate arrays are defined.
int snake_x[64];                   
int snake_y[64];  

// The variables related to the snake are identified.
int snake_length = 1;

// Apple's coordinates are defined.
int apple_x;
int apple_y;

// The parameters are defined.
int direction_time = 0;                       
int snake_speed = 500;                  
int apple_time = 0;
int apple_led_time = 5;
int apple_led = HIGH;


void setup()
{  
// This code facilitates configuring the hardware settings of the Fino Education Kit. 
// With this code, the settings for buttons, LEDs, screen, speaker, joystick, and sensors of the Fino Education Kit are configured.
  fino.Init();  

// This code ensures the deletion of the image on the screen. 
// Sometimes, image information may remain on the screen, which can be misleading when starting to write a new code program.
  fino.Clear();

// This is the code that adjusts the brightness of the screen. 
// Brightness ranges from 0 to 15.
  fino.SetIntensity(15);
   
// Assigning values to arrays for Snake drawings.
  snake_x[0] = 2;
  snake_y[0] = 7;

  for (int i = 1; i < 64; i++)
    snake_x[i] = snake_y[i] = -1;

// Assigning values for Apple drawings.
  apple_x = random(0, 8);
  apple_y = random(0, 8);
}


void loop()
{
  fino.Clear();

// The snake's drawing is carried out.
  for (int i = 0; i < snake_length; i++) {     
    fino.SetDot(snake_x[i], snake_y[i], HIGH);         
  }

// The apple's drawing is carried out.
  if (PlayingField(apple_x, apple_y)) {
    int time = millis();

    if (time - apple_time >= apple_led_time) {
      apple_led = (apple_led == HIGH) ? LOW : HIGH;
      apple_time = time;
    }

    fino.SetDot(apple_x, apple_y, HIGH);
  }
}

boolean PlayingField(int x, int y)
{
  return (x >= 0) && (x < 8) && (y >= 0) && (y < 8);
}