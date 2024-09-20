#include <stdio.h>

int main()
{
    signed int num, digit;
    unsigned char check[10] = {0};
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num < 0)
    {
        num = -num;
    }
    while(num != 0)
    {
        digit = num % 10;
        if(check[digit] == 1)
        {
            break;
        }
        check[digit] = 1;
        num/=10;
    }
    if(num == 0)
    {
        printf("There are no repeated digits");
    }
    else
    {
        printf("There are repeated digits");
    }
    return 0;
}