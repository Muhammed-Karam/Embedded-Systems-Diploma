/*
 * Button_driver_and_control_led_using_button.c
 *
 * Created: 10/24/2024 4:51:13 PM
 *  Author: Mohamed Karam
 */ 


#include "Button.h"
#include "LED.h"

int main(void)
{
	button_vInit('D',0);
	LED_vInit('D',1);
    while(1)
    {
         if(button_u8read('D',0) == 1)
		 {
			 LED_vTurnOn('D',1);
		 }
		 else
		 {
			 LED_vTurnOff('D',1);
		 }			 			 
    }
}