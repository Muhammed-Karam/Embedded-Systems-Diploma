/*
 * DIO.c
 *
 * Created: 10/5/2024 3:39:04 PM
 *  Author: Mohamed Karam
 */ 
#include <avr/io.h>
#include "std_macros.h"

void DIO_vsetPinDirection(unsigned char portName, unsigned char pinNumber, unsigned char pinDirection)
{
	switch(portName)
	{
		case 'A':
		case 'a':
		if(pinDirection == 0)
		{
			CLR_BIT(DDRA,pinNumber);
		}
		else
		{
			SET_BIT(DDRA,pinNumber);
		}
		break;
		
		case 'B':
		case 'b':
		if(pinDirection == 0)
		{
			CLR_BIT(DDRB,pinNumber);
		}
		else
		{
			SET_BIT(DDRB,pinNumber);
		}
		break;
		
		case 'C':
		case 'c':
		if(pinDirection == 0)
		{
			CLR_BIT(DDRC,pinNumber);
		}
		else
		{
			SET_BIT(DDRC,pinNumber);
		}
		break;
		
		default:
		if(pinDirection == 0)
		{
			CLR_BIT(DDRD,pinNumber);
		}
		else
		{
			SET_BIT(DDRD,pinNumber);
		}
		break;
	}
}

void DIO_vwritePin(unsigned char portName, unsigned char pinNumber, unsigned char pinValue)
{
	switch(portName)
	{
		case 'A':
		case 'a':
		if(pinValue == 0)
		{
			CLR_BIT(PORTA,pinNumber);
		}
		else
		{
			SET_BIT(PORTA,pinNumber);
		}
		break;

		case 'B':
		case 'b':
		if(pinValue == 0)
		{
			CLR_BIT(PORTB,pinNumber);
		}
		else
		{
			SET_BIT(PORTB,pinNumber);
		}
		break;

		case 'C':
		case 'c':
		if(pinValue == 0)
		{
			CLR_BIT(PORTC,pinNumber);
		}
		else
		{
			SET_BIT(PORTC,pinNumber);
		}
		break;

		default:
		if(pinValue == 0)
		{
			CLR_BIT(PORTD,pinNumber);
		}
		else
		{
			SET_BIT(PORTD,pinNumber);
		}
		break;
	}
}

void DIO_vtogglePin(unsigned char portName ,char pinNumber)
{
	switch(portName)
	{
		case 'A':
		case 'a':
		TOG_BIT(PORTA,pinNumber);
		break;

		case 'B':
		case 'b':
		TOG_BIT(PORTB,pinNumber);
		break;

		case 'C':
		case 'c':
		TOG_BIT(PORTC,pinNumber);
		break;

		default:
		TOG_BIT(PORTD,pinNumber);
		break;
	}
}

unsigned char DIO_u8readPin(unsigned char portName, unsigned char pinNumber)
{
	unsigned char pinValue = 0;
	switch(portName)
	{
		case 'A':
		case 'a':
		pinValue = READ_BIT(PINA,pinNumber);
		break;

		case 'B':
		case 'b':
		pinValue = READ_BIT(PINB,pinNumber);
		break;

		case 'C':
		case 'c':
		pinValue = READ_BIT(PINC,pinNumber);
		break;

		default:
		pinValue = READ_BIT(PIND,pinNumber);
		break;
	}	
	return pinValue;
}

void DIO_vsetPortDirection(unsigned char portName, unsigned char portDirection)
{
	switch(portName)
	{
		case 'A':
		case 'a':
		DDRA = portDirection;
		break;
		
		case 'B':
		case 'b':
		DDRB = portDirection;
		break;
		
		case 'C':
		case 'c':
		DDRC = portDirection;
		break;
		
		default:
		DDRD = portDirection;
		break;
	}	
}

void DIO_vwritePort(unsigned char portName, unsigned char portValue)
{
	switch(portName)
	{
		case 'A':
		case 'a':
		PORTA = portValue;
		break;
		
		case 'B':
		case 'b':
		PORTB = portValue;
		break;
		
		case 'C':
		case 'c':
		PORTC = portValue;
		break;
		
		default:
		PORTD = portValue;
		break;
	}
}

void DIO_vtogglePort(unsigned char portName)
{
	switch(portName)
	{
		case 'A':
		case 'a':
		PORTA = ~PORTA;
		break;
		
		case 'B':
		case 'b':
		PORTB = ~PORTB;
		break;
		
		case 'C':
		case 'c':
		PORTC = ~PORTC;
		break;
		
		default:
		PORTD = ~PORTD;
		break;
	}	
}

unsigned char DIO_u8readPort(unsigned char portName)
{
	unsigned char portValue = 0;
	switch(portName)
	{
		case 'A':
		case 'a':
		portValue = PINA;
		break;

		case 'B':
		case 'b':
		portValue = PINB;
		break;

		case 'C':
		case 'c':
		portValue = PINC;
		break;

		default:
		portValue = PIND;
		break;
	}
	return portValue;	
}