/*
 * Toggle_4_LEDs_using_one_pin.c
 *
 * Created: 10/6/2024 5:12:56 AM
 *  Author: Mohamed Karam
 */ 

#define F_CPU 8000000UL
#include <util/delay.h>
#include "DIO.h"

int main(void)
{
	DIO_vsetPinDirection('A',0,1);
    while(1)
    {
         DIO_vtogglePin('A',0);
		 _delay_ms(1000);
    }
}