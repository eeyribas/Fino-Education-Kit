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

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "Arduino.h"
#include "Fino.h"

#define ACC 2
#define O_DECODE_MODE  9
#define O_DISPLAY_TEST 15
#define ACCELEROMETER (0xA7>>1) 
#define READ_ACCELEROMETER_DATA (6) 


Fino::Fino() 
{
	data = 12;
	load = 10;
	clock = 11;

	pinMode(13, INPUT);
	pinMode(6, INPUT);
	pinMode(5, INPUT);
	pinMode(4, INPUT);
	
	nummu = 1;
	for (int i = 0; i < 80; i++)
		buffer[i] = 0;
	
	SPI_MOSI = 12;
    SPI_CLK = 11;
    SPI_CS = 10;

    max_d = 1;
    pinMode(SPI_MOSI,OUTPUT);
    pinMode(SPI_CLK,OUTPUT);
    pinMode(SPI_CS,OUTPUT);
    digitalWrite(SPI_CS,HIGH);
    SPI_MOSI = 12;

    for(int i = 0;i < 64;i++) 
        status[i] = 0x00;

    SPITransfer(O_DISPLAY_TEST, 0);
    SPITransfer(O_DECODE_MODE, 0);
    Clear();

	pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
	pinMode(3, INPUT);
	pinMode(7, OUTPUT);
	pinMode(A0, INPUT);
	pinMode(A1, INPUT);
	pinMode(A2, INPUT);
	pinMode(A3, INPUT);
}

Fino::~Fino() 
{
	
}

void Fino::Init()
{
	pinMode(data, OUTPUT);
	pinMode(clock, OUTPUT);
	pinMode(load, OUTPUT);
	digitalWrite(clock, HIGH); 
  
	RunCommand(M_REG_SHUTDOWN, 0x01);  
	RunCommand(M_REG_DISPLAY_TEST, 0x00);	
	RunCommand(M_REG_SCAN_LIMIT, 0x07); 
	RunCommand(M_REG_DECODE_MODE, 0x00);
	
	Clear();
	SetIntensity(0x0f);    
}

void Fino::InitAccelerometre()
{
	Wire.begin();
	
	Wire.beginTransmission(ACCELEROMETER); 
	Wire.write(0x2D); 
	Wire.write(1<<3); 
	Wire.endTransmission();
	
	Wire.beginTransmission(ACCELEROMETER); 
	Wire.write(0x31); 
	Wire.write(0x0B); 
	Wire.endTransmission(); 
	
	Wire.beginTransmission(ACCELEROMETER); 
	Wire.write(0x2C); 
	Wire.write(0x09); 
	Wire.endTransmission();
}

void Fino::Clear()
{
	for (int i = 0; i < 8; i++) 
		SetColumn(i,0);

	for (int i = 0; i < 80; i++)
		buffer[i] = 0;
}

void Fino::SetIntensity(byte intensity)
{
	RunCommand(M_REG_INTENSITY, intensity);
}

void Fino::SetRow(int row, byte value) 
{
	int addr = 0;
    int offset;
    if (row < 0 || row > 7)
        return;
	
    offset = addr * 8;
    status[offset + row] = value;
    SPITransfer(row + 1, status[offset + row]);
}

void Fino::SetDot(byte col, byte row, byte value)
{
    bitWrite(buffer[col], row, value);

	int n = col / 8;
	int c = col % 8;
	digitalWrite(load, LOW); 

	for (int i = 0; i < nummu; i++) {
		if (i == n) {
			shiftOut(data, clock, MSBFIRST, c + 1);
			shiftOut(data, clock, MSBFIRST, buffer[col]);
		} else {
			shiftOut(data, clock, MSBFIRST, 0);
			shiftOut(data, clock, MSBFIRST, 0);
		}
	}

	digitalWrite(load, LOW);
	digitalWrite(load, HIGH);
}

void Fino::SetColumn(byte col, byte value)
{
	digitalWrite(load, LOW);    
	for (int i = 0; i < nummu; i++) {
		shiftOut(data, clock, MSBFIRST, col + 1);
		shiftOut(data, clock, MSBFIRST, value);
		buffer[col * i] = value;
	}
	
	digitalWrite(load, LOW);
	digitalWrite(load, HIGH);
}

void Fino::RunCommand(byte command, byte value)
{
	digitalWrite(load, LOW);    
	for (int i = 0; i < nummu; i++) {
		shiftOut(data, clock, MSBFIRST, command);
		shiftOut(data, clock, MSBFIRST, value);
	}

	digitalWrite(load, LOW);
	digitalWrite(load, HIGH);
}

int8_t Fino::AllTimer(unsigned long period, void (*call)(), int variable_2)
{
	int8_t i = FindFinoTimerIndex();
	if (i == -1) 
		return -1;

	fino_timer[i].timer_type = FINO_TIMER_1;
	fino_timer[i].period = period;
	fino_timer[i].variable_2 = variable_2;
	fino_timer[i].call = call;
	fino_timer[i].last_timer = millis();
	fino_timer[i].variable = 0;
	
	return i;
}

int8_t Fino::AllTimer(unsigned long period, void (*call)())
{
	return AllTimer(period, call, -1);
}

void Fino::Timer(unsigned long now)
{
	for (int8_t i = 0; i < DEG_1; i++) {
		if (fino_timer[i].timer_type != FINO_TIMER_0) {
			fino_timer[i].Timer(now);
		}
	}
}

void Fino::Timer(void)
{
	unsigned long now = millis();
	Timer(now);
}

int Fino::ButtonUpMode()
{
	int value = digitalRead(6);
	
	return value;
}

int Fino::ButtonDownMode()
{
	int value = digitalRead(3);
	
	return value;
}

int Fino::ButtonLeftMode()
{
	int value = digitalRead(5);
	
	return value;
}

int Fino::ButtonRightMode()
{
	int value = digitalRead(4);
	
	return value;
}	

void Fino::RedLedHigh()
{
	digitalWrite(9, HIGH);
}

void Fino::RedLedLow()
{
	digitalWrite(9, LOW);
}

void Fino::YellowLedHigh()
{
	digitalWrite(8, HIGH);
}

void Fino::YellowLedLow()
{
	digitalWrite(8, LOW);
}

void Fino::StartBuzzer(int a)
{
	tone(7, a);
} 

void Fino::StopBuzzer()
{
	noTone(7);
}

int Fino::ReadJoystickX()
{
	  int x_position = analogRead(A0);
	  
	  return x_position;
}

int Fino::ReadJoystickY()
{
	  int y_position = analogRead(A1);
	  
	  return y_position;
}

int Fino::ReadJoystickXX()
{
	  int xx_position = analogRead(A2);
	  
	  return xx_position;
}

int Fino::ReadAccelerometerX()
{
	int hx;
	int acc[3];
	int register_address = 0x32; 
	byte buf[READ_ACCELEROMETER_DATA];

	Wire.beginTransmission(ACCELEROMETER);
	Wire.write(register_address); 
	Wire.endTransmission();
	
	Wire.beginTransmission(ACCELEROMETER); 
	Wire.requestFrom(ACCELEROMETER, READ_ACCELEROMETER_DATA);
	int i = 0;
	while(Wire.available()) {
		buf[i] = Wire.read();
		i++;
	}
	Wire.endTransmission();
	
	acc[0] = (((int)buf[1]) << 8) | buf[0];
	hx = acc[0];
	
	return hx;
}

int Fino::ReadAccelerometerY()
{
	int hy;
	int acc[3];
	int register_address = 0x32; 
	byte buf[READ_ACCELEROMETER_DATA];

	Wire.beginTransmission(ACCELEROMETER);
	Wire.write(register_address); 
	Wire.endTransmission();

	Wire.beginTransmission(ACCELEROMETER);
	Wire.requestFrom(ACCELEROMETER, READ_ACCELEROMETER_DATA);
	int i = 0;
	while(Wire.available()) {
		buf[i] = Wire.read();
		i++;
	}
	Wire.endTransmission(); 
	
	acc[1] = (((int)buf[3]) << 8) | buf[2];
	hy = acc[1];
	
	return hy;
}

int8_t Fino::FindFinoTimerIndex(void)
{
	for (int8_t i = 0; i < DEG_1; i++) {
		if (fino_timer[i].timer_type == FINO_TIMER_0) {
			return i;
		}
	}
	
	return DEG_3;
}

void Fino::Loadre()
{
	for (int i = 0; i < 8; i++) {
		int col = i;
		digitalWrite(load, LOW);
		
		for (int j = 0; j < nummu; j++) {
			shiftOut(data, clock, MSBFIRST, i + 1);
			shiftOut(data, clock, MSBFIRST, buffer[col]);
			col += 8;
		}

		digitalWrite(load, HIGH);
		digitalWrite(load, LOW);
	}
}

void Fino::SPITransfer(volatile byte opcode, volatile byte data) 
{
	int addr = 0;
    int offset = addr * 2;
    int maxbytes = max_d * 2;

    for (int i = 0; i < maxbytes; i++)
        spi_data[i] = (byte)0;
	
    spi_data[offset + 1] = opcode;
    spi_data[offset] = data; 
    digitalWrite(SPI_CS, LOW);
	
    for (int i = maxbytes; i > 0; i--)
        shiftOut(SPI_MOSI,SPI_CLK, MSBFIRST, spi_data[i-1]);
    digitalWrite(SPI_CS, HIGH);
} 