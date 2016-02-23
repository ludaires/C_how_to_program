//
// Created by Ludmilla Aires on 2/11/16.
//

/*Write a program that prints out the numbers 1 to 100 (inclusive).
 *If the number is divisible by 3, print Crackle instead of the number.
 * If it's divisible by 5, print Pop. If it's divisible by both 3 and 5, print CracklePop.
 * Please use whichever language you're focused on learning.*
 */

#include <stdio.h>

int main (void)
{
    int i;
    for (i = 1; i < 101; i++)
    {
        if (i%3 == 0)
        {
            printf("Crackle\n");
        }
        if (i%5 == 0)
        {
            printf("Pop\n");
        }
        if (i%3 == 0 && i%5 == 0)
        {
            printf("CracklePop\n");
        }
        if (i%3 != 0 || i%5 !=0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
