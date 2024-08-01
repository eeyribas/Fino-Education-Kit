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

#ifndef FinoTimer_h
#define FinoTimer_h

/*
The definitions are made; by making definitions, the library is enabled to function more actively.
*/
#include <inttypes.h>

#define FINO_TIMER_0 0
#define FINO_TIMER_1 1
#define FINO_TIMER_2 2

class FinoTimer
{

public:
	/*
	constructor for timer
	*/
	FinoTimer(void);
  
    /*
	method for waiting for a duration that can be provided externally to the timer
	*/
	void Timer(unsigned long now);
  
	/*
	waiting for the duration of the timer method
	*/
	void Timer(void);
  
	/*
	timer callback method
	*/
	void (*call)(void);
  
	/*
	arduino pin variable
	*/
	uint8_t pin;
  
	/*
	state of the arduino pin variable
	*/
	uint8_t pin_state;

	/*
	timer type variable
	*/
	int8_t timer_type;
	
	/*
	last timer variable
	*/
	unsigned long last_timer;

	/*
	timer variable
	*/
	int variable;
  
  	/*
	second timer variable
	*/
	int variable_2;
	
	/*
	timer period variable
	*/
	unsigned long period;
};

#endif