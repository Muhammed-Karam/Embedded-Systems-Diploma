void sort_ascending(signed int *arr, unsigned int size_of_array)
{
    signed int temp;
    unsigned int counter1, counter2;
    for(counter1 = 0; counter1 < size_of_array - 1; counter1++)
    {
        for(counter2 = counter1 + 1 ; counter2 < size_of_array; counter2++)
        {
            if(arr[counter2] < arr[counter1])
            {
                temp = arr[counter1];
                arr[counter1] = arr[counter2];
                arr[counter2] = temp;
            }
        }
    }
}
void sort_descending(signed int *arr, unsigned int size_of_array)
{
    signed int temp;
    unsigned int counter1, counter2;
    for(counter1 = 0; counter1 < size_of_array - 1; counter1++)
    {
        for(counter2 = counter1 + 1 ; counter2 < size_of_array; counter2++)
        {
            if(arr[counter2] > arr[counter1])
            {
                temp = arr[counter1];
                arr[counter1] = arr[counter2];
                arr[counter2] = temp;
            }
        }
    }
}
