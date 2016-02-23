/*
 *  Forty students were asked to rate the quality of the food in the student cafeteria on a
 *  scale of 1 to 10 (1 means awful and 10 means excellent). Place the 40 responses in an
 * integer array and summarize the results of the poll.
 *
 * Fig. 6.7 Student poll program
 *
 * Created by Ludmilla Aires on 2/17/16.
*/

#include <stdio.h>
#define RESPONSE_SIZE 40
#define FREQUENCY_SIZE 11

int main (void)
{
    // counter to loop through 40 responses and frequencies 1 -10
    int answer;
    int rating;

    int frequency[FREQUENCY_SIZE] = {0}; //initialize frequency counter

    // Survey responses
    int responses[RESPONSE_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

    for (answer = 0; answer < RESPONSE_SIZE; answer++)
    {
        ++frequency[responses[answer]];
    }

    printf("%s%17s\n", "Rating", "Frequency");

    for (rating = 1; rating < FREQUENCY_SIZE; rating++)
    {
        printf("%5d%15d\n", rating, frequency[rating]);
    }
    return 0;
}




