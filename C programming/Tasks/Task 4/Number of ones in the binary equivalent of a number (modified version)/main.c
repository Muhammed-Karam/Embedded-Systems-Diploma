#include <stdio.h>
int main()
{
    signed int number;
    unsigned char ones_counter=0;
    printf("Enter a number:\n");
    scanf("%d",&number);
    /*
      This method reduces the number of iterations by reading the least significant bit of the number.
      If it is equal to 1, increment the ones_counter.
      Then, shift the number right by 1 bit and check if the number becomes zero.
      If it does, there is no need to check the other bits.
    */
    while(number!=0)
    {
        if((number&1)==1)
        {
            ones_counter++;
        }
        number=(unsigned int)number>>1;
    }
    printf("Number of ones in the binary representation of the entered number = %i",ones_counter);
    return 0;
}
