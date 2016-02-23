//
// Created by Ludmilla Aires on 1/20/16.
//

#include <stdio.h>
#include <cs50.h>

int main (void)
{
    //initializes the variable
    printf("How many lines? ");
    int check = GetInt();

    // make a loop until is true
    while (check > 0)
    {
        printf("* * * * * * * *\n");
        printf(" * * * * * * * *\n");
        check--;
    }
    return 0;
}