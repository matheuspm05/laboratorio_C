/*Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 100] com valores
inteiros aleatórios (rand/srand) no intervalo entre [10, 99]. Após isso, faça:

2. Exibir na tela a média da soma dos termos múltiplos de 2 e 5.
5. Exibir a média dos termos múltiplos de um Número (Número≥ 10) escolhido pelo usuário.
9. Exibir na tela o menor e o maior dos termos (e seus respectivos índices).
10. Exibir na tela a média dos termos que foram armazenados nos índices ÍMPARES e PARES do vetor.
12. Exibir na tela os termos maiores que a média dos termos que estão nos índices: 0, 4 e 9.
13. Exibir na tela a soma dos termos menores que a média dos termos.
14. Exibir na tela a posição e a soma dos termos menores que ßao2
Declarar BETHA (ß = 27.54) como constante com o comando #define.
15. Exibir os termos (e seus índices) maiores que um valor ƞ (float) escolhido pelo usuário.
16. Exibir os dados ordenados em ordem crescente ou decrescente, a escolha do usuário.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define min 10
#define max 99
#define tamanho 100
#define intervalo (max - min - 1) + min

int main()
{
    int array[tamanho], indice, soma, cont;
    float media;

    srand(time(0));

    for(indice = 0; indice < tamanho; indice++)
    {
        array[indice] = rand() % intervalo;
        printf("%i: ARRAY[%i]: %i \n", indice + 1, indice, array[indice]);

        if(array[indice] % 2 == 0 && array[indice] % 5 == 0 ){
            soma += array[indice];
            cont ++;
        }
    }
    printf(" soma: %.1f\n", soma);
//2) Exibir na tela a média da soma dos termos múltiplos de 2 e 5.
    media = soma / cont;
    printf(" media das soma dos multiplos de 2 e 5: %.1f\n", media);





    return 0;
}
