//
// Created by Ludmilla Aires on 2/2/16.
//

#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    int frequency1 = 0; //rolled 1 counter
    int frequency2 = 0;
    int frequency3 = 0;
    int frequency4 = 0;
    int frequency5 = 0;
    int frequency6 = 0;

    int roll; // roll counter, value 1 to 6000
    int face; // one roll of the die, value 1 to 6

    for (roll = 1; roll <= 6000; roll++)
    {
        face = 1 + rand() % 6;
        /* determine face value and increment appropriate counter*/
        switch (face)
        {
            case 1:/* rolled 1 */
                ++frequency1;
                break;
            case 2:
                ++frequency2;
                break;
            case 3:
                ++frequency3;
                break;
            case 4:
                ++frequency4;
                break;
            case 5:
                ++frequency5;
                break;
            case 6:
                ++frequency6;
                break;
        } //end switch
    } //end for

    //display results in tabular format

    printf("%s%13s\n", "Face", "Frequency");
    printf("  1%13d\n", frequency1);
    printf("  2%13d\n", frequency2);
    printf("  3%13d\n", frequency3);
    printf("  4%13d\n", frequency4);
    printf("  5%13d\n", frequency5);
    printf("  6%13d\n", frequency6);
    return 0; //indicates successful termination
}//end main



