/*
 * DIO_first_lab.c
 *
 * Created: 10/5/2024 3:36:35 PM
 *  Author: Mohamed Karam
 */ 

/*
 *Write a program which toggle 8 LEDs connected to port A every 1 second using DIO peripheral
 */

#define F_CPU 8000000UL
#include <util/delay.h>
#include "DIO.h"

int main(void)
{
	DIO_vsetPortDirection('A',0xff);
    while(1)
    {
         DIO_vtogglePort('A');
		 _delay_ms(1000);
    }
}