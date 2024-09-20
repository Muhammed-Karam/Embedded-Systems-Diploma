#include <stdio.h>
#include "max_and_min_in_array.h"
#define SIZE 5
int main()
{
    signed int arr[SIZE];
    unsigned int counter, max_index, min_index;
    printf("Enter the elements of the array :\n");
    for(counter=0; counter<SIZE; counter++)
    {
        scanf("%i", arr+counter);
    }
    max_index = max_number_in_array(arr,SIZE);
    min_index = min_number_in_array(arr,SIZE);
    printf("The maximum number in the array = %i    at index = %i\n", arr[max_index], max_index);
    printf("The minimum number in the array = %i    at index = %i\n", arr[min_index], min_index);
    return 0;
}
