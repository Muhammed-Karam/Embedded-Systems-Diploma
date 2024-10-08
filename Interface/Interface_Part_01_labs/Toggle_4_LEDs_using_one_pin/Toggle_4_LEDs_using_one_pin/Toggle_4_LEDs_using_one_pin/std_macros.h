/*
 * std_macros.h
 *
 * Created: 9/25/2024 1:20:39 AM
 *  Author: Mohamed Karam
 */ 


#ifndef STD_MACROS_H_
#define STD_MACROS_H_

#define REGISTER_SIZE 8
#define SET_BIT(reg,bit) reg|=(1<<bit)
#define CLR_BIT(reg,bit) reg&=~(1<<bit)
#define TOG_BIT(reg,bit) reg^=(1<<bit)
#define READ_BIT(reg,bit) ((reg&(1<<bit))>>bit)
#define ROL(reg,num) reg=(reg<<num) | (reg>>(REGISTER_SIZE-num))
#define ROR(reg,num) reg=(reg>>num) | (reg<<(REGISTER_SIZE-num))

#endif /* STD_MACROS_H_ */