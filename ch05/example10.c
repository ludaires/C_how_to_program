//
// Created by Ludmilla Aires on 2/2/16.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* enumeration constants represent game status
 */

enum Status {CONTINUE, WON, LOST};

int rollDice(void); //function prototype

int main (void)
{
    int sum;
    int myPoint; //point earned

    enum Status gameStatus; //can contain CONTINUE, WON or LOST

    //randomize random number generator using current time
    srand( time ( NULL ) );

    sum = rollDice(); //first roll of the dice

    //determine game status based on sum of dice
    switch (sum)
    {
        case 7:
        case 11:
            gameStatus = WON;
            break;

        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;

        default:
            gameStatus = CONTINUE;
            myPoint = sum;
            printf("Point is %d\n", myPoint);
            break; //optional
    }

    //while game not complete
    while(gameStatus == CONTINUE)
    {
        sum = rollDice(); //roll dice again

        if (sum == myPoint)
        {
            gameStatus = WON;
        }
        else
        {
            if (sum == 7) //lose by rolling 7
            {
                gameStatus = LOST; //game over
            }//end if
        }// end else
    }//end while

    // display won or lost message
    if (gameStatus == WON)
    {
        printf("Player wins\n");
    }//end if
    else // player lost
    {
        printf("Player loses\n");
    }//end else
    return 0;
}//end main

int rollDice(void)
{
    int die1;
    int die2;
    int workSum; //sum of dice

    die1 = 1 + ( rand() % 6 ); // pick random die1 value
    die2 = 1 + ( rand() % 6 );
    workSum = die1 +  die2;

    printf("Player rolled %d + %d = %d\n", die1, die2, workSum);
    return workSum;
}//end function rollDice