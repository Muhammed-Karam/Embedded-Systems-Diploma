/*
 * LED.c
 *
 * Created: 10/24/2024 12:52:55 AM
 *  Author: Mohamed Karam
 */ 

#include "DIO.h"

void LED_vInit(unsigned char portName,unsigned char pinNumber)
{
	DIO_vsetPinDirection(portName,pinNumber,1);//Set  the given pin in the given port as an output
}

void LED_vTurnOn(unsigned char portName,unsigned char pinNumber)
{
	DIO_vwritePin(portName,pinNumber,1);//Set the given pin in the given port to one(on)
}

void LED_vTurnOff(unsigned char portName,unsigned char pinNumber)
{
	DIO_vwritePin(portName,pinNumber,0);//Set the given pin in the given port to zero(off)
}

void LED_vToggle(unsigned char portName,unsigned char pinNumber)
{
	DIO_vtogglePin(portName,pinNumber);//Set the given pin in the given port to zero if it is one or set it to one if it is zero
}

unsigned char LED_u8readStatus(unsigned char portName,unsigned char pinNumber)
{
	return DIO_u8readPin(portName,pinNumber);
}
