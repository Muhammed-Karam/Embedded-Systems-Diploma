#include <stdio.h>
int main()
{
    signed int number;
    unsigned char counter, ones_counter=0;
    printf("Enter a number:\n");
    scanf("%d",&number);
    // This method reads each bit in the entered number and counts the bits that are equal to 1
    for(counter=0;counter<8*sizeof(number);counter++)
    {
        if(((number&1u<<counter)>>counter)==1)
        {
            ones_counter++;
        }
    }
    printf("Number of ones in the binary representation of number %d = %i",number,ones_counter);
    return 0;
}
