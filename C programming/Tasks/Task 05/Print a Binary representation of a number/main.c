#include<stdio.h>
int main()
{
    signed int number;
    signed char counter;
    printf("Enter a number:\n");
    scanf("%d",&number);
    printf("The binary representation of number %i is:\n",number);
    for(counter=8*sizeof(number)-1;counter>=0;counter--)
    {
        printf("%i",(number&1u<<counter)>>counter);
    }
    return 0;
}
