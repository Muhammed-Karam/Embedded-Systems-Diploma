/*
 * Trivial_Example_DIO.c
 * This program toggles an LED connected to PA0 every 1 second.
 * Created: 9/25/2024 1:19:21 AM
 *  Author: Mohamed Karam
 */ 

// Include AVR input/output library for I/O operations
#include <avr/io.h>
// Define CPU clock speed as 8 MHz
#define F_CPU 8000000UL
// Include delay utility functions (for _delay_ms)
#include <util/delay.h>
// Include standard macros for bit manipulation
#include "std_macros.h"

int main(void)
{
	// Set bit 0 in DDRA register to configure PA0 as an output pin
	SET_BIT(DDRA, 0);
	while(1)
    {
		// Toggle the state of PA0 (connected to the LED) between HIGH and LOW every second
		TOG_BIT(PORTA, 0);
		// Delay for 1000 milliseconds (1 second)
		_delay_ms(1000);
    }
}
