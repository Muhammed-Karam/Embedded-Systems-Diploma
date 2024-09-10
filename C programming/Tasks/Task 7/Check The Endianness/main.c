//write a code using pointer to check the endianness(little endian or big endian) of your IDE
#include<stdio.h>
int main()
{
    short number = 1;
    char *ptr = (char*)&number;
    if(*ptr==1)
    {
        printf("Your IDE is little endian");
    }
    else
    {
        printf("Your IDE is big endian");
    }
    return 0;
}
//Explanation of the code:
/*
Assume the memory is 1 byte per location.
The variable number stored in two location because the size of short is 2 bytes,
If the IDE is little endian so the value of number which is 1
its least significant byte in binary 00000001 stored in the first location
and the MSB 00000000 stored in the second location,
while if the IDE is big endian so the MSB 00000000 stored in the first location
and the LSB stored in the second location 00000001.
When we create a pointer to char point to the first location of number
and dereference it, the value will be 00000001 which is 1 when the IDE is little endian
and the value will be 00000000 which is 0 when the IDE is big endian.
*/
