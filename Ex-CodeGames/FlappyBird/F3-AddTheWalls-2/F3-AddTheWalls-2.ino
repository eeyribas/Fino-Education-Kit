// Flappy Bird - Add the Walls-2

// The library belonging to the Fino Education Kit is included. 
#include "Fino.h"

// An object is instantiated from the Fino class.  
Fino fino;

// Bird's coordinate arrays are defined.
int bird_x[2];
int bird_y[2];                 

// Wall's coordinate arrays are defined.
int wall_1_x[2];                     
int wall_1_y[2];

int wall_2_x[4];  
int wall_2_y[4]; 
 
int wall_3_x[4];  
int wall_3_y[4];

int wall_4_x[3];  
int wall_4_y[3]; 

int wall_5_x[4];  
int wall_5_y[4];   
               
int wall_6_x[3];  
int wall_6_y[3];


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
  fino.SetIntensity(8);

// The bird's coordinate values are defined.
  bird_x[0] = 3;
  bird_y[0] = 5;
  bird_x[1] = 4;
  bird_y[1] = 6;

// The wall's coordinate values are defined.
  wall_1_x[0] = 0;
  wall_1_x[1] = 7;
  wall_1_y[0] = 0;
  wall_1_y[1] = 0;

  wall_2_x[0] = 0;
  wall_2_x[1] = 1;
  wall_2_x[2] = 6;
  wall_2_x[3] = 7;
  wall_2_y[0] = 0;
  wall_2_y[1] = 0;
  wall_2_y[2] = 0;
  wall_2_y[3] = 0; 

  wall_3_x[0] = 0;
  wall_3_x[1] = 5;
  wall_3_x[2] = 6;
  wall_3_x[3] = 7;
  wall_3_y[0] = 0;
  wall_3_y[1] = 0;
  wall_3_y[2] = 0;
  wall_3_y[3] = 0;

  wall_4_x[0] = 0;
  wall_4_x[1] = 1;
  wall_4_x[2] = 7;
  wall_4_y[0] = 0;
  wall_4_y[1] = 0;
  wall_4_y[2] = 0;
  
  wall_5_x[0] = 0;
  wall_5_x[1] = 1;
  wall_5_x[2] = 2;
  wall_5_x[3] = 7;
  wall_5_y[0] = 0;
  wall_5_y[1] = 0;
  wall_5_y[2] = 0;
  wall_5_y[3] = 0;

  wall_6_x[0] = 1;
  wall_6_x[1] = 2;
  wall_6_x[2] = 6;
  wall_6_y[0] = 0;
  wall_6_y[1] = 0;
  wall_6_y[2] = 0;
}


void loop()
{
  fino.Clear();

// The bird's drawing is carried out.
  fino.SetDot(bird_x[0], bird_y[0], HIGH);
  fino.SetDot(bird_x[1], bird_y[1], HIGH);

// The wall's drawing is carried out.
  fino.SetDot(wall_1_x[0], wall_1_y[0], HIGH);  
  fino.SetDot(wall_1_x[1], wall_1_y[1], HIGH); 

  fino.SetDot(wall_2_x[0], wall_2_y[0], HIGH);  
  fino.SetDot(wall_2_x[1], wall_2_y[1], HIGH);   
  fino.SetDot(wall_2_x[2], wall_2_y[2], HIGH);  
  fino.SetDot(wall_2_x[3], wall_2_y[3], HIGH); 
    
  fino.SetDot(wall_3_x[0], wall_3_y[0], HIGH);  
  fino.SetDot(wall_3_x[1], wall_3_y[1], HIGH);   
  fino.SetDot(wall_3_x[2], wall_3_y[2], HIGH);  
  fino.SetDot(wall_3_x[3], wall_3_y[3], HIGH);

  fino.SetDot(wall_4_x[0], wall_4_y[0], HIGH);  
  fino.SetDot(wall_4_x[1], wall_4_y[1], HIGH);   
  fino.SetDot(wall_4_x[2], wall_4_y[2], HIGH);  

  fino.SetDot(wall_5_x[0], wall_5_y[0], HIGH);  
  fino.SetDot(wall_5_x[1], wall_5_y[1], HIGH);   
  fino.SetDot(wall_5_x[2], wall_5_y[2], HIGH);  
  fino.SetDot(wall_5_x[3], wall_5_y[3], HIGH); 

  fino.SetDot(wall_6_x[0], wall_6_y[0], HIGH);  
  fino.SetDot(wall_6_x[1], wall_6_y[1], HIGH);   
  fino.SetDot(wall_6_x[2], wall_6_y[2], HIGH);
}