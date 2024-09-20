#include<stdio.h>
int main()
{
    signed int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    printf("Before Swapping:\n");
    printf("Number1 = %d\nNumber2 = %d\n",num1,num2);
    /*
        This method is like the second method but using XOR operation (^).

        Properties of XOR:
        x^x=0
        x^0=x
        x^y^x=x^x^y=y

        Note:
        - This method not valid for floating-point types (float, double)
          because XOR is a bitwise operation and is not defined for these types.
        Example: If num1 = 5 and num2 = 3:
    */
    num1=num1^num2;     //num1 = 5^3
    num2=num1^num2;     //num2 = 5^3^3 = 5
    num1=num1^num2;     //num3 = 5^3^5 = 3
    printf("After Swapping:\n");
    printf("Number1 = %d\nNumber2 = %d\n",num1,num2);
    return 0;
}
