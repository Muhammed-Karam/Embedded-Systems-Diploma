#include<stdio.h>
void binary(int number);
int main()
{
    int number;
    printf("Enter a number :");
    scanf("%i",&number);
    printf("The binary representaion is:\n");
    if(number==0)
    {
        printf("%i",number);
    }
    else
    {
        binary(number);
    }
    return 0;
}
void binary(int number)
{
    if(number==0)
        return;
    binary((unsigned int)number>>1);
    printf("%i",number&1);
}
