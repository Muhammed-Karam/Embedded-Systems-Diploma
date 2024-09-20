#include <stdio.h>
int f(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}
int main()
{
    int c, *b, **a;
    c = 4, b = &c, a = &b;
    printf("%d",f(c,b,a));
    return 0;
}
/*
What is the output?
a) 18
b) 19
c) 21
d) 22
*******************
Answer: b) 19
*******************
Explanation:
When the function f(c, b, a) is called:
In function f:
The arguments of the function f will be initialized to the calling inputs, so
x = c, py = b, ppz = a.

At **ppz += 1; it double dereferences the pointer-to-pointer (ppz) to the int variable c, 
accessing the variable c in the main function. The value of c will be increased by 1, so c = 5.

At z = **ppz; the variable z will be equal to c in main, which is now 5.

At *py += 2; it dereferences the pointer py (which points to c) and increases c by 2. 
Now, c will equal 7.

At y = *py; the variable y is assigned the value of c, which is now 7.

At x += 3; the value of x (which was initialized to c, and is equal to 4 at the start) 
is increased by 3, so x will now equal 7.

Now, x = 7, y = 7, and z = 5.

The function f returns the sum x + y + z, which equals 19.

In the main function, the printf function prints the return value of the function f, 
which is 19.
*/
