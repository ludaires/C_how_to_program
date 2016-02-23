#include <stdio.h>


int main( void )
{
    /* number to be input from user */

    int num1, num2, num3, num4,  num5;

    printf( "Enter five integers, and I will tell you\n" );
    printf( "which one is the lagest and smallest: " );

    scanf( "%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5 );

    /* function begins program execution largest number */
    if (num5 > num4 && num5 > num3 && num5 > num2 && num5 > num1)
    {
            printf("Largest: %d\n", num5);
    }
    else if (num4 > num5 && num4 > num3 && num4 > num2 && num4 > num1)
    {
            printf("Largest: %d\n", num4);
    }
    else if (num3 > num4 && num3 > num5 && num3 > num2 && num3 > num1)
    {
            printf("Largest: %d\n", num3);
    }
    else if (num2 > num4 && num2 > num5 && num2 > num3 && num2 > num1)
    {
            printf("Largest: %d\n", num2);
    }
    else
    {
            printf("Lagest: %d\n", num1);
    }

    /* function begins program execution smallest number*/
       if (num5 < num4 && num5 < num3 && num5 < num2 && num5 < num1)
    {
            printf("Smallest: %d\n", num5);
    }
    else if (num4 < num5 && num4 < num3 && num4 < num2 && num4 < num1)
    {
            printf("Smallest: %d\n", num4);
    }
    else if (num3 < num4 && num3 < num5 && num3 < num2 && num3 < num1)
    {
            printf("Smallest: %d\n", num3);
    }
    else if (num2 < num4 && num2 < num5 && num2 < num3 && num2 < num1)
    {
            printf("Smallest: %d\n", num2);
    }
    else
    {
            printf("Smallest: %d\n", num1);
    }

    return 0;
}
