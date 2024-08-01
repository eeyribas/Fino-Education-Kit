// Colliding Wagons - Add Obstacles

// The library belonging to the Fino Education Kit is included. 
#include "Fino.h"

// An object is instantiated from the Fino class.  
Fino fino;

// Creating an array for x and y axes in Wagon.
int wagon_x[5];
int wagon_y[5];                 

// Creating an array for x and y axes in Obstacles.
int obstacle_1_x[2];                     
int obstacle_1_y[2];

int obstacle_2_x[4];  
int obstacle_2_y[4]; 
 
int obstacle_3_x[3];  
int obstacle_3_y[3];

int obstacle_4_x[3];  
int obstacle_4_y[3]; 

int obstacle_5_x[3];  
int obstacle_5_y[3];  
                
int obstacle_6_x[3];  
int obstacle_6_y[3];

int obstacle_7_x[2];                     
int obstacle_7_y[2];

int obstacle_8_x[4];  
int obstacle_8_y[4];  

int obstacle_9_x[3];  
int obstacle_9_y[3];

int obstacle_10_x[3];  
int obstacle_10_y[3]; 

int obstacle_11_x[3];  
int obstacle_11_y[3];   
               
int obstacle_12_x[3];  
int obstacle_12_y[3];


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

// Assigning values to arrays for Wagon drawings.
  wagon_x[0] = 5;
  wagon_y[0] = 3;
  wagon_x[1] = 5;
  wagon_y[1] = 4;
  wagon_x[2] = 5;
  wagon_y[2] = 5;
  wagon_x[3] = 4;
  wagon_y[3] = 3;
  wagon_x[4] = 4;
  wagon_y[4] = 5;

// Assigning values to arrays for Obstacles drawings.
  obstacle_1_x[0] = 0;
  obstacle_1_x[1] = 7;
  obstacle_1_y[0] = 0;
  obstacle_1_y[1] = 0;

  obstacle_2_x[0] = 0;
  obstacle_2_x[1] = 1;
  obstacle_2_x[2] = 6;
  obstacle_2_x[3] = 7;
  obstacle_2_y[0] = 0;
  obstacle_2_y[1] = 0;
  obstacle_2_y[2] = 0;
  obstacle_2_y[3] = 0; 

  obstacle_3_x[0] = 1;
  obstacle_3_x[1] = 2;
  obstacle_3_x[2] = 7;
  obstacle_3_y[0] = 0;
  obstacle_3_y[1] = 0;
  obstacle_3_y[2] = 0;

  obstacle_4_x[0] = 0;
  obstacle_4_x[1] = 1;
  obstacle_4_x[2] = 6;
  obstacle_4_y[0] = 0;
  obstacle_4_y[1] = 0;
  obstacle_4_y[2] = 0;
  
  obstacle_5_x[0] = 0;
  obstacle_5_x[1] = 6;
  obstacle_5_x[2] = 7;
  obstacle_5_y[0] = 0;
  obstacle_5_y[1] = 0;
  obstacle_5_y[2] = 0;

  obstacle_6_x[0] = 1;
  obstacle_6_x[1] = 6;
  obstacle_6_x[2] = 7;
  obstacle_6_y[0] = 0;
  obstacle_6_y[1] = 0;
  obstacle_6_y[2] = 0;

  obstacle_7_x[0] = 0;
  obstacle_7_x[1] = 7;
  obstacle_7_y[0] = 0;
  obstacle_7_y[1] = 0;

  obstacle_8_x[0] = 0;
  obstacle_8_x[1] = 1;
  obstacle_8_x[2] = 6;
  obstacle_8_x[3] = 7;
  obstacle_8_y[0] = 0;
  obstacle_8_y[1] = 0;
  obstacle_8_y[2] = 0;
  obstacle_8_y[3] = 0; 

  obstacle_9_x[0] = 1;
  obstacle_9_x[1] = 2;
  obstacle_9_x[2] = 7;
  obstacle_9_y[0] = 0;
  obstacle_9_y[1] = 0;
  obstacle_9_y[2] = 0;

  obstacle_10_x[0] = 0;
  obstacle_10_x[1] = 1;
  obstacle_10_x[2] = 6;
  obstacle_10_y[0] = 0;
  obstacle_10_y[1] = 0;
  obstacle_10_y[2] = 0;
  
  obstacle_11_x[0] = 2;
  obstacle_11_x[1] = 6;
  obstacle_11_x[2] = 7;
  obstacle_11_y[0] = 0;
  obstacle_11_y[1] = 0;
  obstacle_11_y[2] = 0;

  obstacle_12_x[0] = 2;
  obstacle_12_x[1] = 3;
  obstacle_12_x[2] = 7;
  obstacle_12_y[0] = 0;
  obstacle_12_y[1] = 0;
  obstacle_12_y[2] = 0;
}


void loop()
{
  fino.Clear();

// Drawing a wagon on an 8x8 Dot Matrix
  fino.SetDot(wagon_x[0], wagon_y[0], HIGH);
  fino.SetDot(wagon_x[1], wagon_y[1], HIGH);
  fino.SetDot(wagon_x[2], wagon_y[2], HIGH);
  fino.SetDot(wagon_x[3], wagon_y[3], HIGH);
  fino.SetDot(wagon_x[4], wagon_y[4], HIGH);

// Drawing Obstacles on an 8x8 Dot Matrix
  fino.SetDot(obstacle_1_x[0], obstacle_1_y[0], HIGH);  
  fino.SetDot(obstacle_1_x[1], obstacle_1_y[1], HIGH);  

  fino.SetDot(obstacle_2_x[0], obstacle_2_y[0], HIGH);  
  fino.SetDot(obstacle_2_x[1], obstacle_2_y[1], HIGH);   
  fino.SetDot(obstacle_2_x[2], obstacle_2_y[2], HIGH);  
  fino.SetDot(obstacle_2_x[3], obstacle_2_y[3], HIGH);  

  fino.SetDot(obstacle_3_x[0], obstacle_3_y[0], HIGH);  
  fino.SetDot(obstacle_3_x[1], obstacle_3_y[1], HIGH);   
  fino.SetDot(obstacle_3_x[2], obstacle_3_y[2], HIGH);  

  fino.SetDot(obstacle_4_x[0], obstacle_4_y[0], HIGH);  
  fino.SetDot(obstacle_4_x[1], obstacle_4_y[1], HIGH);   
  fino.SetDot(obstacle_4_x[2], obstacle_4_y[2], HIGH); 

  fino.SetDot(obstacle_5_x[0], obstacle_5_y[0], HIGH);  
  fino.SetDot(obstacle_5_x[1], obstacle_5_y[1], HIGH);   
  fino.SetDot(obstacle_5_x[2], obstacle_5_y[2], HIGH);

  fino.SetDot(obstacle_6_x[0], obstacle_6_y[0], HIGH);  
  fino.SetDot(obstacle_6_x[1], obstacle_6_y[1], HIGH);   
  fino.SetDot(obstacle_6_x[2], obstacle_6_y[2], HIGH);

  fino.SetDot(obstacle_7_x[0], obstacle_7_y[0], HIGH);  
  fino.SetDot(obstacle_7_x[1], obstacle_7_y[1], HIGH);    

  fino.SetDot(obstacle_8_x[0], obstacle_8_y[0], HIGH);  
  fino.SetDot(obstacle_8_x[1], obstacle_8_y[1], HIGH);   
  fino.SetDot(obstacle_8_x[2], obstacle_8_y[2], HIGH);  
  fino.SetDot(obstacle_8_x[3], obstacle_8_y[3], HIGH);  

  fino.SetDot(obstacle_9_x[0], obstacle_9_y[0], HIGH);  
  fino.SetDot(obstacle_9_x[1], obstacle_9_y[1], HIGH);   
  fino.SetDot(obstacle_9_x[2], obstacle_9_y[2], HIGH); 

  fino.SetDot(obstacle_10_x[0], obstacle_10_y[0], HIGH);  
  fino.SetDot(obstacle_10_x[1], obstacle_10_y[1], HIGH);   
  fino.SetDot(obstacle_10_x[2], obstacle_10_y[2], HIGH);

  fino.SetDot(obstacle_11_x[0], obstacle_11_y[0], HIGH);  
  fino.SetDot(obstacle_11_x[1], obstacle_11_y[1], HIGH);   
  fino.SetDot(obstacle_11_x[2], obstacle_11_y[2], HIGH); 

  fino.SetDot(obstacle_12_x[0], obstacle_12_y[0], HIGH);  
  fino.SetDot(obstacle_12_x[1], obstacle_12_y[1], HIGH);   
  fino.SetDot(obstacle_12_x[2], obstacle_12_y[2], HIGH);
}