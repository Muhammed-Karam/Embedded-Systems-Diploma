/*
 * DIO.h
 *
 * Created: 10/5/2024 3:38:44 PM
 *  Author: Mohamed Karam
 */ 


#ifndef DIO_H_
#define DIO_H_

/*
Function Name        : DIO_vsetPinDirection
Function Returns     : void
Function Arguments   : unsigned char portName,unsigned char pinNumber,unsigned char pinDirection
Function Description : Set the direction of the given pin in the given port (pinDirection 0 = input : 1 = output)
*/
void DIO_vsetPinDirection(unsigned char portName, unsigned char pinNumber, unsigned char pinDirection);


/*
Function Name        : DIO_vwritePin
Function Returns     : void
Function Arguments   : unsigned char portName,unsigned char pinNumber,unsigned char pinValue
Function Description : Set the value of the given pin in the given port (pinValue 0 = low : 1 = high)
*/
void DIO_vwritePin(unsigned char portName, unsigned char pinNumber, unsigned char pinValue);


/*
Function Name        : DIO_vtogglePin
Function Returns     : void
Function Arguments   : unsigned char PortName,unsigned char pinNumber
Function Description : Reverse the value of the given pin in the given port.
*/
void DIO_vtogglePin(unsigned char PortName, unsigned char pinNumber);


/*
Function Name        : DIO_u8readPin
Function Returns     : unsigned char
Function Arguments   : unsigned char portName,unsigned char pinNumber
Function Description : Returns 1 if the value of the given pin is high and zero if the value is low
*/
unsigned char DIO_u8readPin(unsigned char portName, unsigned char pinNumber);

/*
Function Name        : DIO_vsetPortDirection
Function Returns     : void
Function Arguments   : unsigned char portName,unsigned char portDirection
Function Description : set the direction of whole port .
*/
void DIO_vsetPortDirection(unsigned char portName, unsigned char portDirection);


/*
Function Name        : DIO_write_port
Function Returns     : void
Function Arguments   : unsigned char portName,unsigned char portValue
Function Description : Write the value to all port pins.
*/
void DIO_vwritePort(unsigned char portName, unsigned char portValue);


/*
Function Name        : DIO_vtogglePort
Function Returns     : void
Function Arguments   : unsigned char portName
Function Description : Reverse the value of all pins in the given port.
*/
void DIO_vtogglePort(unsigned char portName);


/*
Function Name        : DIO_u8readPort
Function Returns     : unsigned char
Function Arguments   : unsigned char portName
Function Description : read the value of the port .
*/
unsigned char DIO_u8readPort(unsigned char portName);

#endif /* DIO_H_ */