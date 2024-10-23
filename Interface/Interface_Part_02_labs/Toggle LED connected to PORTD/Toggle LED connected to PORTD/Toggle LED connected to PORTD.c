/*
 * Toggle_LED_connected_to_PORTD.c
 *
 * Created: 10/24/2024 1:13:28 AM
 *  Author: Mohamed Karam
 */ 


#define F_CPU 8000000UL
#include <util/delay.h>
#include "LED.h"
int main(void)
{
	LED_vInit('D', 0);
    while(1)
    {
         LED_vToggle('D', 0);
		 _delay_ms(1000);
    }
}