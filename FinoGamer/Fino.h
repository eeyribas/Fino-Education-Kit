/*
Fino Gamer Library
F_NX484746

Invented in Istanbul.
https://github.com/eeyribas

License
************************************************** ********************************
This library is free software; however, it cannot be redistributed, modified, and/or used in any other way without permission.
Product rights; Personal, Patent offices, GNU license laws, and manufacturer rights.
This library cannot be distributed without permission. This library cannot be used commercially. Please contact if used commercially.

This product has received a copy of the GNU General Secretary. The license can be viewed at the following address:
http://www.gnu.org/licenses/

Please preserve this license information. If you notice that this code has been copied in any way, modified in different products, please inform us. Help us avoid legal action.
************************************************** ********************************
*/

#ifndef _Fino_H_
#define _Fino_H_

/*
The definitions are made; by making definitions, the library is enabled to function more actively.
*/
#include "Arduino.h"
#include <inttypes.h>
#include <FinoTimer.h>
#include <Wire.h>

#define M_REG_DECODE_MODE  0x09
#define M_REG_INTENSITY   0x0a
#define M_REG_SCAN_LIMIT   0x0b
#define M_REG_SHUTDOWN    0x0c
#define M_REG_DISPLAY_TEST 0x0f
#define DEG_1 (10)
#define DEG_2 (-2)
#define DEG_3 (-1)

class Fino
{
  public:
  
	/*
	constructor
	*/
    Fino();
	
	/*
	deconstructor
	*/
    ~Fino();
	
	/*
	there are initialization processes related to the library
	*/
    void Init();
	
	/*
	initialize the accelerometer
	*/
	void InitAccelerometre();
	
	/*
	clears the screen
	*/
	void Clear();
	
	/*
	set intensity parameter
	*/
	void SetIntensity(byte intensity);

	/*
	set the row of the 8x8 dot matrix screen according to the entered parameter
	*/
	void SetRow(int row, byte value);
	
	/*
	the relevant position of the 8x8 LED screen lights up according to the parameters
	*/
    void SetDot(byte col, byte row, byte value);
	
	/*
	set the column of the 8x8 dot matrix screen according to the entered parameter
	*/
	void SetColumn(byte col, byte value);
	
	/*
	run command
	*/
	void RunCommand(byte command, byte value);
	
	/*
	gets all of the timers
	*/
	int8_t AllTimer(unsigned long period, void (*call)(void), int variable_2);
	
	/*
	gets all of the timers
	*/
	int8_t AllTimer(unsigned long period, void (*call)(void));
	
	/*
	timer method
	*/
	void Timer(unsigned long now);
	
	/*
	timer method
	*/
	void Timer(void);
	
	/*
	button up mode
	*/
	int ButtonUpMode();
	
	/*
	button down mode
	*/
	int ButtonDownMode();
	
	/*
	button left mode
	*/
	int ButtonLeftMode();
	
	/*
	button right mode
	*/
	int ButtonRightMode();
	
	/*
	set the red led high
	*/
	void RedLedHigh();
	
	/*
	set the red led low
	*/
	void RedLedLow();
	
	/*
	set the yellow led high
	*/
	void YellowLedHigh();
	
	/*
	set the yellow led low
	*/
	void YellowLedLow();
	
	/*
	start buzzer
	*/
	void StartBuzzer(int a);
	
	/*
	stop buzzer
	*/
	void StopBuzzer();
	
	/*
	the joystick x-axis is read
	*/
	int ReadJoystickX();
	
	/*
	the joystick y-axis is read
	*/
	int ReadJoystickY();

	/*
	the joystick x-axis and y-axis is read
	*/	
	int ReadJoystickXX();
	
	/*
	the X-axis of the accelerometer is read
	*/
	int ReadAccelerometerX();
	
	/*
	the Y-axis of the accelerometer is read
	*/
	int ReadAccelerometerY();	

protected:
	/*
	find FinoTimer index
	*/
    int8_t FindFinoTimerIndex(void);
	
	/*
	FinoTimer objects 
	*/
    FinoTimer fino_timer[DEG_1];
	
private:
	void Loadre();
	void SPITransfer(byte opcode, byte data);
	
    byte data;
    byte load;
    byte clock;
    byte nummu;
    byte buffer[80];    
	byte spi_data[16];
    byte status[64];
    int SPI_MOSI;
    int SPI_CLK;
    int SPI_CS;
    int max_d;
};

#endif
