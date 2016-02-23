//
// Created by Ludmilla Aires on 2/10/16.
//

#include <stdio.h>
#include <cs50.h>

#define KRED  "\x1B[31m"
#define KBLU  "\x1B[34m"

bool isPrime(unsigned long long number);

int main (void)
{
    unsigned long long x;
    printf("Give me a number to know if it is prime: ");
    scanf("%llu", &x);

    for (unsigned long long i = 0; i < x; i++)
    {
        if (isPrime(i) == true)
        {
            printf("%s%llu ", KRED, i);
        }
        else
        {
            printf("%s%llu ", KBLU, i);
        }

        if ( i % 10 == 0 )
        {
            printf("\n");
        }
    }
}

bool isPrime (unsigned long long  number)
{
    for (unsigned long long i = 2; i < number; i++)
    {
        if ((number % i) == 0.0)
        {
//            printf("The number %llu is divisible by %llu\n", number, i);
            return false;
        }
    }
    return true;
}

