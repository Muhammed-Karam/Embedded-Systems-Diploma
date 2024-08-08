#include<stdio.h>
int main()
{
    signed int num1, num2;
    signed int temp;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    printf("Before Swapping:\n");
    printf("Number1 = %d\nNumber2 = %d\n",num1,num2);
    //Swapping code using temporary variable.
    //This method take an extra size in RAM but it is better in execution time.
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After Swapping:\n");
    printf("Number1 = %d\nNumber2 = %d\n",num1,num2);
    return 0;
}
