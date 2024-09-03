/*
  Escrever um algoritmo em C para exibir os múltiplos de 11 e a soma dos
  múltiplos de 11, em ordem decrescente (inversa), compreendidos entre o
  intervalo: [300 400].
  */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int soma, cont = 0, i;

    for ( i = 400; i >= 300; i--)
    {
        if ( i % 11 == 0)
        {
            printf("%i Multiplos de 11: %i \n", cont + 1, i);
            cont ++;
            soma += i;
        }
    }

    printf("a soma dos multiplos: %i", soma);

    return 0;
}
