#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long number;
    unsigned char counter;
    printf("Please enter a number: ");
    scanf("%lu",&number);
    //Check odd or even number by reading the least significant bit.
    if((number&1)==1)
    {
        //If the least significant bit equal 1 the number is odd.
        printf("number is odd\n");
    }
    else
    {
        //If the least significant bit equal 0 the number is even.
        printf("number is even\n");
    }

    /*
        prime numbers are positive integers greater than 1 with
        exactly two factors, 1 and the number itself.
    */
    if(number==0 || number==1)
    {
        printf("number is not prime\n");
    }
    else
    {
        for(counter=2; counter<=sqrt(number); counter++)
        {
            /*
             If this condition is true, then the number is divisible by
             the counter which is greater than 1 and less than or equal to
             the square root of the number. Hence, the number is not prime, so break the loop.
            */
            if(number%counter==0)
            {
                break;
            }
        }
        /*
         If counter is greater than the square root of the number by 1
         then the condition (number%counter==0) is always false inside the for loop
         and the loop is end because of counter is greater than square root of number
         so the number is prime.
        */
        if(counter==(unsigned long)sqrt(number)+1)
        {
            printf("number is prime\n");
        }
        else
        {
            printf("number is not prime\n");
        }
    }
    return 0;
}


