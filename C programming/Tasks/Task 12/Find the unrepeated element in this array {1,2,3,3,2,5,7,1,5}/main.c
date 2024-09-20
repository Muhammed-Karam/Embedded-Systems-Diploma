#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,3,2,5,7,1,5};
    int counter, num;
    num=arr[0];
    for(counter = 1; counter < sizeof(arr)/sizeof(int); counter++)
    {
        num ^= arr[counter]; 
    }
    printf("The unrepeated element is : %i", num);
    return 0;
}