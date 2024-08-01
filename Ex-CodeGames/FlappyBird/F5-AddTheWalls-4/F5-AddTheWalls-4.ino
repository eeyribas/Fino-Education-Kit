// Flappy Bird - Add the Walls-4

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

int wall_7_x[3];  
int wall_7_y[3]; 

int wall_8_x[5];  
int wall_8_y[5];

int wall_9_x[5];  
int wall_9_y[5];

int wall_10_x[5];  
int wall_10_y[5];

int wall_11_x[6];  
int wall_11_y[6];

int wall_12_x[6];  
int wall_12_y[6];


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

  wall_7_x[0] = 2;
  wall_7_x[1] = 3;
  wall_7_x[2] = 7;
  wall_7_y[0] = 0;
  wall_7_y[1] = 0;
  wall_7_y[2] = 0;
  
  wall_8_x[0] = 0;
  wall_8_x[1] = 1;
  wall_8_x[2] = 2;
  wall_8_x[3] = 3;
  wall_8_x[4] = 4;
  wall_8_y[0] = 0;
  wall_8_y[1] = 0;
  wall_8_y[2] = 0;
  wall_8_y[3] = 0;
  wall_8_y[4] = 0;

  wall_9_x[0] = 0;
  wall_9_x[1] = 4;
  wall_9_x[2] = 5;
  wall_9_x[3] = 6;
  wall_9_x[4] = 7;
  wall_9_y[0] = 0;
  wall_9_y[1] = 0;
  wall_9_y[2] = 0;
  wall_9_y[3] = 0;
  wall_9_y[4] = 0;

  wall_10_x[0] = 0;
  wall_10_x[1] = 1;
  wall_10_x[2] = 2;
  wall_10_x[3] = 3;
  wall_10_x[4] = 4;
  wall_10_y[0] = 0;
  wall_10_y[1] = 0;
  wall_10_y[2] = 0;
  wall_10_y[3] = 0;
  wall_10_y[4] = 0;

  wall_11_x[0] = 0;
  wall_11_x[1] = 3;
  wall_11_x[2] = 4;
  wall_11_x[3] = 5;
  wall_11_x[4] = 6;
  wall_11_x[5] = 7;
  wall_11_y[0] = 0;
  wall_11_y[1] = 0;
  wall_11_y[2] = 0;
  wall_11_y[3] = 0;
  wall_11_y[4] = 0;
  wall_11_y[5] = 0;

  wall_12_x[0] = 0;
  wall_12_x[1] = 1;
  wall_12_x[2] = 2;
  wall_12_x[3] = 3;
  wall_12_x[4] = 4;
  wall_12_x[5] = 5;
  wall_12_y[0] = 0;
  wall_12_y[1] = 0;
  wall_12_y[2] = 0;
  wall_12_y[3] = 0;
  wall_12_y[5] = 0;
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

  fino.SetDot(wall_7_x[0], wall_7_y[0], HIGH);  
  fino.SetDot(wall_7_x[1], wall_7_y[1], HIGH);   
  fino.SetDot(wall_7_x[2], wall_7_y[2], HIGH);  

  fino.SetDot(wall_8_x[0], wall_8_y[0], HIGH);  
  fino.SetDot(wall_8_x[1], wall_8_y[1], HIGH);   
  fino.SetDot(wall_8_x[2], wall_8_y[2], HIGH);   
  fino.SetDot(wall_8_x[3], wall_8_y[3], HIGH);   
  fino.SetDot(wall_8_x[4], wall_8_y[4], HIGH); 

  fino.SetDot(wall_9_x[0], wall_9_y[0], HIGH);  
  fino.SetDot(wall_9_x[1], wall_9_y[1], HIGH);   
  fino.SetDot(wall_9_x[2], wall_9_y[2], HIGH);   
  fino.SetDot(wall_9_x[3], wall_9_y[3], HIGH);   
  fino.SetDot(wall_9_x[4], wall_9_y[4], HIGH);

  fino.SetDot(wall_10_x[0], wall_10_y[0], HIGH);  
  fino.SetDot(wall_10_x[1], wall_10_y[1], HIGH);   
  fino.SetDot(wall_10_x[2], wall_10_y[2], HIGH);   
  fino.SetDot(wall_10_x[3], wall_10_y[3], HIGH);   
  fino.SetDot(wall_10_x[4], wall_10_y[4], HIGH); 

  fino.SetDot(wall_11_x[0], wall_11_y[0], HIGH);  
  fino.SetDot(wall_11_x[1], wall_11_y[1], HIGH);   
  fino.SetDot(wall_11_x[2], wall_11_y[2], HIGH);   
  fino.SetDot(wall_11_x[3], wall_11_y[3], HIGH);   
  fino.SetDot(wall_11_x[4], wall_11_y[4], HIGH); 
  fino.SetDot(wall_11_x[5], wall_11_y[5], HIGH); 

  fino.SetDot(wall_12_x[0], wall_12_y[0], HIGH);  
  fino.SetDot(wall_12_x[1], wall_12_y[1], HIGH);   
  fino.SetDot(wall_12_x[2], wall_12_y[2], HIGH);   
  fino.SetDot(wall_12_x[3], wall_12_y[3], HIGH);   
  fino.SetDot(wall_12_x[4], wall_12_y[4], HIGH); 
  fino.SetDot(wall_12_x[5], wall_12_y[5], HIGH);
}