// Colliding Wagons - Wagon Movement with Buttons

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

int obstacle_13_x[2];                     
int obstacle_13_y[2];

int obstacle_14_x[4];  
int obstacle_14_y[4];  

int obstacle_15_x[3];  
int obstacle_15_y[3];

int obstacle_16_x[3];  
int obstacle_16_y[3]; 

int obstacle_17_x[3];  
int obstacle_17_y[3];    
              
int obstacle_18_x[3];  
int obstacle_18_y[3];

int obstacle_19_x[1];                     
int obstacle_19_y[1];

int obstacle_20_x[3];  
int obstacle_20_y[3];  

int obstacle_21_x[2];  
int obstacle_21_y[2];

int obstacle_22_x[2];  
int obstacle_22_y[2]; 

int obstacle_23_x[2];  
int obstacle_23_y[2];   
               
int obstacle_24_x[2];  
int obstacle_24_y[2];


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

  obstacle_13_x[0] = 0;
  obstacle_13_x[1] = 7;
  obstacle_13_y[0] = 0;
  obstacle_13_y[1] = 0;

  obstacle_14_x[0] = 0;
  obstacle_14_x[1] = 1;
  obstacle_14_x[2] = 6;
  obstacle_14_x[3] = 7;
  obstacle_14_y[0] = 0;
  obstacle_14_y[1] = 0;
  obstacle_14_y[2] = 0;
  obstacle_14_y[3] = 0; 

  obstacle_15_x[0] = 1;
  obstacle_15_x[1] = 2;
  obstacle_15_x[2] = 7;
  obstacle_15_y[0] = 0;
  obstacle_15_y[1] = 0;
  obstacle_15_y[2] = 0;

  obstacle_16_x[0] = 0;
  obstacle_16_x[1] = 1;
  obstacle_16_x[2] = 6;
  obstacle_16_y[0] = 0;
  obstacle_16_y[1] = 0;
  obstacle_16_y[2] = 0;
  
  obstacle_17_x[0] = 2;
  obstacle_17_x[1] = 6;
  obstacle_17_x[2] = 7;
  obstacle_17_y[0] = 0;
  obstacle_17_y[1] = 0;
  obstacle_17_y[2] = 0;

  obstacle_18_x[0] = 2;
  obstacle_18_x[1] = 3;
  obstacle_18_x[2] = 7;
  obstacle_18_y[0] = 0;
  obstacle_18_y[1] = 0;
  obstacle_18_y[2] = 0;

  obstacle_19_x[0] = 1;
  obstacle_19_y[0] = 0;
  
  obstacle_20_x[0] = 2;
  obstacle_20_x[1] = 6;
  obstacle_20_x[2] = 7;
  obstacle_20_y[0] = 0;
  obstacle_20_y[1] = 0;
  obstacle_20_y[2] = 0;

  obstacle_21_x[0] = 3;
  obstacle_21_x[1] = 7;
  obstacle_21_y[0] = 0;
  obstacle_21_y[1] = 0;

  obstacle_22_x[0] = 3;
  obstacle_22_x[1] = 4;
  obstacle_22_y[0] = 0;
  obstacle_22_y[1] = 0;
  
  obstacle_23_x[0] = 2;
  obstacle_23_x[1] = 6;
  obstacle_23_y[0] = 0;
  obstacle_23_y[1] = 0;

  obstacle_24_x[0] = 1;
  obstacle_24_x[1] = 5;
  obstacle_24_y[0] = 0;
  obstacle_24_y[1] = 0;
}


void loop()
{
  fino.Clear();

// The character can be controlled/directed using the buttons.
  if (fino.ButtonUpMode() == 1) {
    if (wagon_x[4] > 0) {
      wagon_x[0] = wagon_x[0] - 1;
      wagon_x[1] = wagon_x[1] - 1;
      wagon_x[2] = wagon_x[2] - 1;
      wagon_x[3] = wagon_x[3] - 1;
      wagon_x[4] = wagon_x[4] - 1;

    } else {
      wagon_x[0] = 1;
      wagon_x[1] = 1;
      wagon_x[2] = 1;
      wagon_x[3] = 0;
      wagon_x[4] = 0;
    }

    delay(10);

  } else if (fino.ButtonDownMode() == 1) {
    if (wagon_x[0] < 7) {
      wagon_x[0] = wagon_x[0] + 1;
      wagon_x[1] = wagon_x[1] + 1;
      wagon_x[2] = wagon_x[2] + 1;
      wagon_x[3] = wagon_x[3] + 1;
      wagon_x[4] = wagon_x[4] + 1;

    } else {
      wagon_x[0] = 7;
      wagon_x[1] = 7;
      wagon_x[2] = 7;
      wagon_x[3] = 6;
      wagon_x[4] = 6;
    }

    delay(10);
  }

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

  fino.SetDot(obstacle_13_x[0], obstacle_13_y[0], HIGH);  
  fino.SetDot(obstacle_13_x[1], obstacle_13_y[1], HIGH); 
    
  fino.SetDot(obstacle_14_x[0], obstacle_14_y[0], HIGH);  
  fino.SetDot(obstacle_14_x[1], obstacle_14_y[1], HIGH);   
  fino.SetDot(obstacle_14_x[2], obstacle_14_y[2], HIGH);  
  fino.SetDot(obstacle_14_x[3], obstacle_14_y[3], HIGH);  

  fino.SetDot(obstacle_15_x[0], obstacle_15_y[0], HIGH);  
  fino.SetDot(obstacle_15_x[1], obstacle_15_y[1], HIGH);   
  fino.SetDot(obstacle_15_x[2], obstacle_15_y[2], HIGH); 

  fino.SetDot(obstacle_16_x[0], obstacle_16_y[0], HIGH);  
  fino.SetDot(obstacle_16_x[1], obstacle_16_y[1], HIGH);   
  fino.SetDot(obstacle_16_x[2], obstacle_16_y[2], HIGH);  

  fino.SetDot(obstacle_17_x[0], obstacle_17_y[0], HIGH);  
  fino.SetDot(obstacle_17_x[1], obstacle_17_y[1], HIGH);   
  fino.SetDot(obstacle_17_x[2], obstacle_17_y[2], HIGH);  

  fino.SetDot(obstacle_18_x[0], obstacle_18_y[0], HIGH);  
  fino.SetDot(obstacle_18_x[1], obstacle_18_y[1], HIGH);   
  fino.SetDot(obstacle_18_x[2], obstacle_18_y[2], HIGH);

  fino.SetDot(obstacle_19_x[0], obstacle_19_y[0], HIGH);  

  fino.SetDot(obstacle_20_x[0], obstacle_20_y[0], HIGH);  
  fino.SetDot(obstacle_20_x[1], obstacle_20_y[1], HIGH);   
  fino.SetDot(obstacle_20_x[2], obstacle_20_y[2], HIGH); 

  fino.SetDot(obstacle_21_x[0], obstacle_21_y[0], HIGH);  
  fino.SetDot(obstacle_21_x[1], obstacle_21_y[1], HIGH); 

  fino.SetDot(obstacle_22_x[0], obstacle_22_y[0], HIGH);  
  fino.SetDot(obstacle_22_x[1], obstacle_22_y[1], HIGH); 

  fino.SetDot(obstacle_23_x[0], obstacle_23_y[0], HIGH);  
  fino.SetDot(obstacle_23_x[1], obstacle_23_y[1], HIGH); 

  fino.SetDot(obstacle_24_x[0], obstacle_24_y[0], HIGH);  
  fino.SetDot(obstacle_24_x[1], obstacle_24_y[1], HIGH); 
}