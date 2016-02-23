/*
 *  Roling a Die 6000 times and summarizing tge results in an array
 *  Example from C how to program - Deitel.
 *
 * Fig. 6.9 Student poll program
 *
 * Created by Ludmilla Aires on 2/18/16.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main (void)
{
    int face; // random die value 1 - 6
    int roll; // counter to 6000
    int frequency[SIZE] = {0}; //clear counts
    srand(time(NULL)); // seed random-number generator

    //roll die 6000 times
    for(roll = 1; roll <= 6000; roll++)
    {
        face = 1 + rand() % 6;
        ++frequency[face];
    }
    printf("%s%17s\n", "Face", "Frequency");

    //output the frequency
    for(face = 1; face < SIZE; face++)
    {
        printf("%4d%17d\n", face, frequency[face]);
    }
    return 0;
}