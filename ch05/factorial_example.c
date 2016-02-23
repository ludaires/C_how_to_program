//
// Created by Ludmilla Aires on 2/9/16.
//

#include <stdio.h>
#include <math.h>

long factorial (long number); /* function prototype */

int main (void)
{
    int i; /* counter */

    for (i = 0; i <= 10; i++)
    {
        printf("%2d! = %1d\n", i, factorial(i));
    }
    return 0;
}

//recursive definition of function factorial
long factorial (long number)
{
    if (number <= 1) {
        return 1;
    }
    else {
        return (number *factorial(number -1));
    }
}
