/*
 * toggle_led_using_push_button.c
 *
 * Created: 11/24/2024 2:43:43 PM
 *  Author: Mohamed Karam
 */ 


#include "LED.h"
#include "Button.h"

int main(void)
{
	LED_vInit('D',1);
	button_vInit('D',0);
	unsigned char button_state = 0, prev_button_state = 0;
	while(1)
	{
		button_state=button_u8read('D',0);
		if(button_state==1 && prev_button_state==0)
		{
			LED_vToggle('D',1);
			
		}
		prev_button_state = button_state;
	}
}