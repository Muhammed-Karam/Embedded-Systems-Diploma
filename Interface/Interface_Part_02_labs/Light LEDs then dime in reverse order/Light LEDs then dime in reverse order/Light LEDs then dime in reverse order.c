/*
 * Light_LEDs_then_dime_in_reverse_order.c
 *
 * Created: 10/24/2024 2:16:33 AM
 *  Author: Mohamed Karam
 */ 


#define F_CPU 8000000UL
#include <util/delay.h>
#include "LED.h"

int main(void)
{
	signed char LED_number;
	
	for(LED_number = 0; LED_number <= 7; LED_number++)
	{
		LED_vInit('D',LED_number);
	}	
		
    while(1)
    {
		for(LED_number = 0; LED_number <= 7; LED_number++)
		{
			LED_vTurnOn('D',LED_number);
			_delay_ms(250);
		}
		
		for(LED_number = 7; LED_number >= 0; LED_number--)
		{
			LED_vTurnOff('D',LED_number);
			_delay_ms(250);
		}
    }
}