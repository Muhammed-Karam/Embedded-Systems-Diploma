#include <stdio.h>
#include "sort_array.h"
#define SIZE 5

int main()
{
    signed int arr[SIZE];
    unsigned int counter;
    printf("Enter the elements of the array :\n");
    for(counter = 0; counter < SIZE; counter++)
    {
        scanf("%d",arr+counter);
    }
    sort_ascending(arr, SIZE);
    printf("Sorted array in ascending order :\n");
    for(counter = 0; counter < SIZE; counter++)
    {
        printf("arr[%u] = %d\n",counter, arr[counter]);
    }
    printf("\n\n");
    sort_descending(arr, SIZE);
    printf("Sorted array in descending order :\n");
    for(counter = 0; counter < SIZE; counter++)
    {
        printf("arr[%u] = %d\n",counter, arr[counter]);
    }
    return 0;
}