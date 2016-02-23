#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main (void)
{
    /* number from the user*/
    int num1;

    printf( "Enter one integers, and I will tell you\n");
    printf( "if it is odd or even: \n");

    // read the number.
    scanf( "%d", &num1);

    // fuction begins
    if (num1%2 == 0)
    {
        printf("%d is an even number.\n", num1);
    }
    else
    {
        printf("%d is an odd number.\n", num1);
    }

    return 0;

}

