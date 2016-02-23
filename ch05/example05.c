//
// Created by Ludmilla Aires on 2/2/16.
//

#include <stdio.h>

int square(int y); /*function prototype */

int main (void)
{
    int x; //counter
    // loop 10 times and calculate an output square of x each time.
    for (x = 1; x <= 10; x++)
    {
        printf("%d ", square(x)); //square (x) é a chamada da função.
    }
    printf("\n");
    return 0; // indicates successful termination
}

// square function definition returns square of parameter
int square (int y) // y is a copy of argument to function
{
    return y * y; //returns square of y as an int
}
