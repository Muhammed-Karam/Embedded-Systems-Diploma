#include<stdio.h>
int main()
{
    signed int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    printf("Before Swapping:\n");
    printf("Number1 = %d\nNumber2 = %d\n",num1,num2);
    /*
        This method swaps the values without using extra memory (no temporary variable is needed).
        However, it has a slightly longer execution time compared to the method using a temporary variable.
        This is because the swapping process involves arithmetic operations (addition and subtraction),
        which are handled by the Arithmetic Logic Unit (ALU) of the microprocessor.

        Example: If num1 = 5 and num2 = 3:
    */
    num1=num1+num2;     //num1 = 5+3 = 8
    num2=num1-num2;     //num2 = 8-3 = 5
    num1=num1-num2;     //num3 = 8-5 = 3
    printf("After Swapping:\n");
    printf("Number1 = %d\nNumber2 = %d\n",num1,num2);
    return 0;
}
