/*
 * Internal_Pull_Up_Resistance.c
 *
 * Created: 11/24/2024 12:37:58 AM
 *  Author: Mohamed Karam
 */ 


#include "LED.h"
#include "Button.h"

int main(void)
{
	button_vInit('D',0);
	LED_vInit('D',1);
	DIO_vconnectpullup('D',0,1);
    while(1)
    {
         if(button_u8read('D',0) == 0)
         {
	         LED_vTurnOn('D',1);
         }
         else
         {
	         LED_vTurnOff('D',1);
         }
    }
}