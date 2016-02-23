//
// Created by Ludmilla Aires on 1/21/16.
//

#include <stdio.h>

int main (void)
{

    int number = 2;
    int i = 1;
    printf("the number are: \n");

    while (i <= 10)
    {
        int result = i * number;
        printf("%d\n", result);
        i++;
    }
    return 0;
}