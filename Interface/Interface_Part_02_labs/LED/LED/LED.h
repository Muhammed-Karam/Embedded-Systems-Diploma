/*
 * LED.h
 *
 * Created: 10/24/2024 12:54:35 AM
 *  Author: Mohamed Karam
 */ 


#ifndef LED_H_
#define LED_H_
/*
Function Name        : LED_vInit
Function Returns     : void
Function Arguments   : unsigned char portName,unsigned char pinNumber
Function Description : Initialize the pin as an output pin to connect the led.
*/
void LED_vInit(unsigned char portName,unsigned char pinNumber);

/*
Function Name        : LED_vTurnOn
Function Returns     : void
Function Arguments   : unsigned char portName,unsigned char pinNumber
Function Description : Turn on the led connected to the given pin and port.
*/
void LED_vTurnOn(unsigned char portName,unsigned char pinNumber);

/*
Function Name        : LED_vTurnOff
Function Returns     : void
Function Arguments   : unsigned char portName,unsigned char pinNumber
Function Description : Turn off the led connected to the given pin and port.
*/
void LED_vTurnOff(unsigned char portName,unsigned char pinNumber);

/*
Function Name        : LED_vToggle
Function Returns     : void
Function Arguments   : unsigned char portName,unsigned char pinNumber
Function Description : Toggle the led connected to the given pin and port.
*/
void LED_vToggle(unsigned char portName,unsigned char pinNumber);

/*
Function Name        : LED_u8readStatus
Function Returns     : unsigned char
Function Arguments   : unsigned char portName,unsigned char pinNumber
Function Description : Read the value of the led connected to the given pin and port.
*/
unsigned char LED_u8readStatus(unsigned char portName,unsigned char pinNumber);

#endif /* LED_H_ */