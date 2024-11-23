/*
 * Button.c
 *
 * Created: 10/24/2024 4:54:32 PM
 *  Author: Mohamed Karam
 */ 

#include "DIO.h"

void button_vInit(unsigned char portName, unsigned char pinNumber)
{
	DIO_vsetPinDirection(portName,pinNumber,0);
}

unsigned char button_u8read(unsigned char portName, unsigned char pinNumber)
{
	return DIO_u8readPin(portName,pinNumber);
}