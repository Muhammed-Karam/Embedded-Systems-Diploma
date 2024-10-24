/*
 * toggle_2_leds_with_specific_delay.c
 *
 * Created: 10/24/2024 3:00:16 AM
 *  Author: Mohamed Karam
 */ 


#define F_CPU 8000000UL
#include <util/delay.h>
#include "LED.h"

int main(void)
{
	LED_vInit('D',0);
	LED_vInit('D',1);
	unsigned char prev_status;
    while(1)
    {
         _delay_ms(1000);
		 prev_status = LED_u8readStatus('D',0);
		 LED_vToggle('D',0);
		 if(prev_status == 1)
		 {
			 LED_vToggle('D',1);
		 }
    }
}