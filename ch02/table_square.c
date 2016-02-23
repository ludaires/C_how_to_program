#include <stdio.h>

int main (void)
{
    printf("Number\tSquare\tCube\n");

    for (int i = 0; i < 11; i++)
    {
        int square = i * i;
        int cube = square * i;
        printf("%d\t\t%d\t\t%d\n", i, square, cube);
    }
}