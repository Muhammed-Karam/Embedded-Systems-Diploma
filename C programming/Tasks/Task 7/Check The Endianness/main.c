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
// Explanation of the code:
/*
Assume that memory stores 1 byte per location.
The variable 'number' is stored in two locations because the size of 'short' is 2 bytes.
If the system is little-endian, the value of 'number' (which is 1) 
has its least significant byte (LSB) in binary (00000001) stored in the first location, 
and the most significant byte (MSB) (00000000) stored in the second location.
On the other hand, if the system is big-endian, the MSB (00000000) will be stored 
in the first location, and the LSB (00000001) will be stored in the second location.
We create a 'char' pointer that points to the first byte of 'number' 
and dereference it. If the value at the first location is 00000001 (which is 1), 
the system is little-endian. If the value is 00000000 (which is 0), 
the system is big-endian.
*/

