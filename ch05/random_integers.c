//
// Created by Ludmilla Aires on 2/9/16.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int n;
    n = 11;
    for (int i = -3; i < n; i++){
        printf("%d\n", rand() % 11);
    }
    return 0;
}