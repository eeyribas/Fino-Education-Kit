// Snake And Dangerous Snake - LED Effect While Playing with Joystick

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
int apple_time = 1000 / 200;
int apple_led_time = 5;
int apple_led = HIGH;

// The direction parameters are defined.
const int RIGHT = 0;
const int DOWN = 1;
const int LEFT = 2;
const int UP = 3;
int direction = RIGHT;


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
   
// Reset the game.
  ResetGame();
}


void loop()
{
// The game is played using joystick.
  if (fino.ReadJoystickX() < 300) {
    direction = LEFT;
    fino.RedLedHigh();
    fino.YellowLedLow();
  } else if (fino.ReadJoystickX() > 700) {
    direction = RIGHT;
    fino.RedLedHigh();
    fino.YellowLedLow(); 
  } else if (fino.ReadJoystickY() < 300) {
    direction = UP;
    fino.RedLedLow();
    fino.YellowLedHigh();
  } else if (fino.ReadJoystickY() > 700) {
    direction = DOWN;
    fino.RedLedLow();
    fino.YellowLedHigh();
  }

// Algorithm for the snake to move.
  int snake_move_time = millis();
  if (snake_move_time - direction_time >= snake_speed) {

// Game over check.
    for (int i = snake_length - 1; i > 0; i--) {
      if (snake_x[0] == snake_x[i] && snake_y[0] == snake_y[i]) {
        ResetGame();
      } else {
        snake_x[i] = snake_x[i-1];
        snake_y[i] = snake_y[i-1];
      }
    }

    switch (direction) {
      case RIGHT:
        if (snake_y[0] > 0) {
          snake_y[0] = snake_y[0] - 1;
        } else {
          snake_y[0] = 7;
        }
        break;

      case DOWN:
        if (snake_x[0] < 7) {
          snake_x[0] = snake_x[0] + 1;
        } else {
          snake_x[0] = 0;
        }
        break;

      case LEFT:
        if (snake_y[0] < 7) {
          snake_y[0] = snake_y[0] + 1;
        } else {
          snake_y[0] = 0;
        }
        break;

      case UP:
        if (snake_x[0] > 0) {
          snake_x[0] = snake_x[0] - 1;
        } else {
          snake_x[0] = 7;
        }
        break;
    }

// The snake's apple-catching condition is checked. 
// If the snake catches the apple, it grows.
    if ((snake_x[0] == apple_x) && (snake_y[0] == apple_y)) {
      snake_length++;

      if (snake_length < 64) {      
        apple_x = random(0, 8);
        apple_y = random(0, 8);

        while (CatchingApple(apple_x, apple_y)) {
          apple_x = random(0, 8);
          apple_y = random(0, 8);
        }
      } else {
        apple_x = apple_y = -1;
      }
    }

    direction_time = snake_move_time;
  }

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

boolean CatchingApple(int tmp_apple_x, int tmp_apple_y)
{
  for (int i = 0; i < snake_length - 1; i++) {
    if ((tmp_apple_x == snake_x[i]) && (tmp_apple_y == snake_y[i])) {
      return true;
    }
  }

  return false;
}

void ResetGame()
{
  snake_length = 1;
  
// Assigning values to arrays for Snake drawings.
  snake_x[0] = 2;
  snake_y[0] = 7;

  for (int i = 1; i < 64; i++)
    snake_x[i] = snake_y[i] = -1;

// Assigning values for Apple drawings.
  apple_x = random(0, 8);
  apple_y = random(0, 8);

// The situation of catching the apple is checked.
  while (CatchingApple(apple_x, apple_y)) {
    apple_x = random(0, 8);
    apple_y = random(0, 8);
  }
}