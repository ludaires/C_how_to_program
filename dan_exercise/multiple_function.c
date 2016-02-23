//
// Created by Ludmilla Aires on 2/12/16.
//

#include<stdio.h>

int multiples (int number1, int number2); //prototype function

int main (void)
{
    int x;
    int y;
    printf("Give me two numbers:");
    scanf("%d%d", &x, &y);
    printf("The result of %d times %d is: %d\n", x, y, multiples(x,y));
    return 0;
}

int multiples (int number1, int number2)
{
    if (number2 == 1)
    {
        return number1;
    }
    else
    {
        return multiples(number1, number2 - 1) + number1;
    }
}
