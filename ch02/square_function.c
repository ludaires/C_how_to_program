#include <stdio.h>


int square(int y);

int main (void)
{
    int x; //counter
    //criar um loop 10 vezes para calcular e fazer o output do resultado.
    for (x = 1; x <= 10; x++)
    {
        printf("%d ", square(x)); //square (x) é a chamada da função.
    }
    printf("\n");
    return 0; //indicar que terminou a excução com sucesso.
}

//sempre colocar os calculos da função, abaixo do main.
// função que irá retornar os parametros do cálculo de área (square)
int square (int y)
{
    return y * y; //retorna o valor as an int.
}
