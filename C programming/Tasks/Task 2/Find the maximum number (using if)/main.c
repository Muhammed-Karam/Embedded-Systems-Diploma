#include<stdio.h>
int main()
{
    signed int x, y, z;
    printf("Enter three numbers x, y and z respectively:\n");
    scanf("%d%d%d",&x,&y,&z);
    if( x>y && x>z )
    {
        printf("x is the maximum number\n");
    }
    else if( y>x && y>z )
    {
        printf("y is the maximum number\n");
    }
    else if( z>x && z>y )
    {
        printf("z is the maximum number\n");
    }
    else if( x==y )
    {
        printf("x and y are the maximum numbers\n");
    }
    else if( x==z )
    {
        printf("x and z are the maximum numbers\n");
    }
    else if( y==z )
    {
        printf("y and z are the maximum numbers\n");
    }
    else
    {
        printf("x, y and z are the maximum numbers\n");
    }
    return 0;
}
