//
// Created by Ludmilla Aires on 2/2/16.
//

#include <stdio.h>

int maximum(int x, int y, int z);

int main(void) {
    int number1;
    int number2;
    int number3;

    printf("Enter three integers: ");
    scanf("%d%d%d", &number1, &number2, &number3);

    printf("Maximum is: %d\n", maximum(number1, number2, number3));
    return 0;
}

int maximum (int x, int y, int z)
{
    int max = x; //assume x is largest

    if (y > max) //if y is the larger than max, assign y to max
    {
        max = y;
    }

    if (z > max)
    {
        max = z;
    }

    return max; //max is largest value.
}