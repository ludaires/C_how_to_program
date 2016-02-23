//
// Created by Ludmilla Aires on 2/16/16.
// Initialize the elements of array s to even integers from 2 to 20
//fig. 6.5 fig06_05.c
//

#include <stdio.h>
#define SIZE 12

int main (void)
{
    //SIZE is used to specify array size
    int s[SIZE];
    int j; //counter
    int total = 0;

    //set the values
    for (j = 0; j < SIZE; j++)
    {
        s[j] = 2 + 2 * j;
    }
    //output the content of array
    for (j = 0; j < SIZE; j++)
    {
        total += s[j];
    }
    printf("%d\n", total);
    return 0;
}