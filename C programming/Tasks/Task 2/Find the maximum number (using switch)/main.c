#include<stdio.h>
int main()
{
    signed int x, y, z;
    printf("Enter three numbers x, y and z respectively:\n");
    scanf("%d%d%d",&x,&y,&z);
    switch((x>y && x>z) +2*( y>x && y>z ) +3*( z>x && z>y ))
    {
    case 1:
        printf("x is the maximum number\n");
        break;
    case 2:
        printf("y is the maximum number\n");
        break;
    case 3:
        printf("z is the maximum number\n");
        break;
    default:
        switch(( x==y ) +2*( x==z ) +3*( y==z ))
        {
        case 1:
            printf("x and y are the maximum numbers\n");
            break;
        case 2:
            printf("x and z are the maximum numbers\n");
            break;
        case 3:
            printf("y and z are the maximum numbers\n");
            break;
        default:
            printf("x, y and z are the maximum numbers\n");
        }
    }
    return 0;
}
