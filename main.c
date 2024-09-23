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
#include <locale.h>

#define min 10
#define max 99
#define tamanho 4
#define intervalo (max - min - 1) + min

int main()
{
    int array[tamanho], indice = 0, indicemin = 0,indicemax = 0;
    int soma2 = 0,soma5 = 0,cont2 = 0, cont5 = 0;
    int numero = 0,menor9 = 101, maior9 = 0;
    float media2, media5;

    setlocale(LC_ALL, "Portuguese");

    srand (time(NULL));

    while(numero < 10)
    {
        printf("insira um numero maior ou igual a 10:\n");
        scanf("%i", &numero);

        if(numero < 10)
            printf("insira um numero (Número >= 10)\n");
    }

    for(indice = 0; indice < tamanho; indice++)
    {
        array[indice] = rand() % intervalo;
        printf("%i: ARRAY[%i]: %i \n", indice + 1, indice, array[indice]);

        if(array[indice] % 2 == 0 && array[indice] % 5 == 0 )
        {
            soma2 += array[indice];
            cont2 ++;
        }
        else if(array[indice] % numero == 0)
        {
            soma5 += array[indice];
            cont5 ++;
        }
        else if(array[indice] != 0)
        {
            if(array[indice] < menor9)
            {
                menor9 = array[indice];
                indicemin = indice;
            }


            if(array[indice] > maior9)
            {
                maior9 = array[indice];
                indicemax = indice;
            }
        }
        else if()
    }


//2) Exibir na tela a média da soma dos termos múltiplos de 2 e 5.
    if (cont2 > 0)
    {
        media2 = (float)soma2 / cont2;
        printf("\nMédia das soma dos múltiplos de 2 e 5: %.1f\n", media2);
    }
    else
        printf("\nNenhum múltiplo de 2 e 5 encontrado.\n");


//5. Exibir a média dos termos múltiplos de um Número (Número≥ 10) escolhido pelo usuário.
    if (cont5 > 0)
    {
        media5 = (float)soma5 / cont5;
        printf("\nMédia dos termos múltiplos de (Número >= 10): %.1f\n", media5);
    }
    else
        printf("\nNenhum múltiplo do número escolhido encontrado.\n");

//9. Exibir na tela o menor e o maior dos termos (e seus respectivos índices)

    printf("\nINDICE[%i], Menor numero: %i \n", indicemin, menor9);
    printf("INDICE[%i], Maior numero: %i \n", indicemax, maior9);

//10. Exibir na tela a média dos termos que foram armazenados nos índices ÍMPARES e PARES do vetor.


    return 0;

}
