#include <stdio.h>

int main (void)
{
    //number to be input by user
    int num1, num2;

    printf("Give me a number two numbers: ");
    scanf("%d%d", &num1, &num2);

    //if the remaind of the division between the first and the second is zero.
    if (num1%num2 ==0)
    {
        printf("The number %d is a multiple of %d.", num1, num2);
    }
    else
    {
        //if the remainder is not zero, the number is not a multiple.
        printf("The number %d is not a multiple of %d.\n", num1, num2);
    }
    return 0;
