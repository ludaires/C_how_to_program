//
// Created by Ludmilla Aires on 2/11/16.
//

#include <stdio.h>
#include <math.h>

#define KRED  "\x1B[31m"
#define KBLU  "\x1B[34m"

int isPrime(unsigned long long n){
    unsigned long long i;

    if (n==2)
        return 1;

    if (n%2==0)
        return 0;

    for (i=3;i<=sqrt(n);i+=2)
        if (n%i==0)
            return 0;

    return 1;
}

int main(){
    unsigned long long x;
    printf("Give me a number to know if it is prime: ");
    scanf("%llu", &x);

    for (unsigned long long i = 0; i < x; i++)
    {
        if (isPrime(i) == 1)
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

    return 0;
}