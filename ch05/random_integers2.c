//
// Created by Ludmilla Aires on 2/10/16.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber (int startRange, int finishRange);

int main (void)
{
    srand(time(NULL));
    int x;
    int y;
    printf("Give me two number: ");
    scanf("%d%d\n", &x, &y);
    randomNumber(x,y);
}

int randomNumber (int startRange, int finishRange)
{
    for (int i = startRange; i <= finishRange; i++)
    {
        printf("%d\n", rand() % finishRange);
    }
    return 0;
}

