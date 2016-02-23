//
// Created by Ludmilla Aires on 2/1/16.
//
#include <stdio.h>

int main (void)
{
    int numbers[10];
    int quantidadeImpares = 0;

    int loops = 0;
    while( quantidadeImpares < 10)
    {
        loops++;
        if (loops % 2 != 0)
        {
//            printf("Este loop foi Impar: %i\n", loops);
            numbers[quantidadeImpares] = loops;
            quantidadeImpares++;
//            printf("Total de Impares: %i\n\n", quantidadeImpares);
        }
    }
}
