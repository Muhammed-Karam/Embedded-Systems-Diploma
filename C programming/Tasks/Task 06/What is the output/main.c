#include<stdio.h>
int fun()
{
    static int num = 16;
    return num--;
}
int main()
{
    for(fun();fun();fun())
    {
        printf("%d ",fun());
    }
    return 0;
}
/*
    What is the output?
    a) Infinite loop
    b) 13 10 7 4 1
    c) 14 11 8 5 2
    d) 15 12 8 5 2
    ****************************
    The Answer is c) 14 11 8 5 2
    ****************************
    Explanation:

    When the main function is called, the for loop is executed. The loop has three components:

    Initialization: The function fun() is called. Inside fun(),
                    the static variable num is initialized to 16. This initialization happens only once,
                    and the value of num persists between function calls due to its static nature.
                    fun() then returns 16 and decrements num to 15.
                    If we call this fun() again this line of initialization of static variable will not be
                    execute because local static variables have lifetime of program runtime and stored first
                    in .data segment in flash memory then the startup code store it in .data segment in RAM
                    So the variable will not deallocate as local variables stored in stack.

    Condition:      The fun() function is called again to check the loop condition.
                    It returns 15 and decrements num to 14.
                    Since 15 is non-zero, the loop continues.

    Iteration:      The third call to fun() happens within the printf statement,
                    where fun() returns 14 and decrements num to 13, printing 14.

    The loop continues, with fun() being called three times in each iteration:
                    once for the condition check,
                    once for the printf statement, and once for the iteration expression.
                    Each time, num decreases by 1 and the current value of num is printed.

    The first iteration prints 14 (with num becoming 13 after the print).
    The second iteration prints 11 (with num becoming 10 after the print).
    The third iteration prints 8 (with num becoming 7 after the print).
    The fourth iteration prints 5 (with num becoming 4 after the print).
    The fifth iteration prints 2 (with num becoming 1 after the print).
    Finally, when num reaches 0, the condition in the for loop becomes false, and the loop terminates.

    At the end of the loop, the value of num will be -1.
*/
