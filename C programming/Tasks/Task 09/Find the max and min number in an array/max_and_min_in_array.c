int max_number_in_array(int *arr,int size_of_array)
{
    int max_num, max_index, counter;
    max_num = *arr;
    max_index = 0;
    for(counter=1; counter<size_of_array; counter++)
    {
        if( *(arr+counter) > max_num )
        {
            max_num = *(arr+counter);
            max_index = counter;
        }
    }
    return max_index;
}

int min_number_in_array(int *arr,int size_of_array)
{
    int min_num, min_index, counter;
    min_num = *arr;
    min_index = 0;
    for(counter=1; counter<size_of_array; counter++)
    {
        if( *(arr+counter) < min_num )
        {
            min_num = *(arr+counter);
            min_index = counter;
        }
    }
    return min_index;
}

