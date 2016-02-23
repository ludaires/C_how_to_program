//
// Created by Ludmilla Aires on 1/21/16.
//

#include <stdio.h>

int main (void)
{
    int a, b, c, d, e;
    printf("Give me five positive number: \n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    if (a%e == 0 && b%d == 0)
    {
        printf("The number %d%d%d%d%d is a palindrome", a, b, c, d, e);
    }
    else
    {
        printf("The number %d%d%d%d%d is not a palindrome", a, b, c, d, e);
    }
    return 0;
}
