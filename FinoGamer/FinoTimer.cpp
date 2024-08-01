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

#include "FinoTimer.h"


FinoTimer::FinoTimer(void)
{
	timer_type = FINO_TIMER_0;
}

void FinoTimer::Timer(unsigned long now)
{
	if (now - last_timer >= period) {
		switch (timer_type) {
			case FINO_TIMER_1:
				(call)();
				break;

			case FINO_TIMER_2:
				pin_state = ! pin_state;
				digitalWrite(pin, pin_state);
				break;
		}
		
		last_timer = now;
		variable++;
	}
	
	if (variable_2 > -1 && variable >= variable_2) {
		timer_type = FINO_TIMER_0;
	}
}

void FinoTimer::Timer(void)
{
    unsigned long now = millis();
    Timer(now);
}