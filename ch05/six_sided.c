//
// Created by Ludmilla Aires on 2/2/16.
//
#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    int i; //counter

/*   unsigned seed; //number used to seed random number generator
*       Exemplo 5.9 pag 157
*    printf("Enter seed:...");
*   scanf("%u", &seed);
*    srand(seed);
*/
    //loop 10 times
    for (i = 1; i <=10; i++)
    {
        //pick radom number
        printf("%10d", 1 + (rand() % 6));
        // if counter is divisible by 5, begin new line of outuput.
        if (i % 5 == 0)
        {
         printf("\n");
        }//end of if
    } // end of for

    return 0; //successful termination
}

