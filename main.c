/*
  Escreva um algoritmo em C que leia de 10.000 habitantes de uma pequena cidade se está empregado ou
  não e exiba em porcentagem a quantidade de empregados e desempregados desta pequena cidade.
  */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int habitantes = 0, dig = 0, empre = 0, dempre = 0;
    float pempre, pdempre;
    do
    {
        printf("menu\n");
        printf("digite 0: desempregado\n");
        printf("digite 1: empregado\n");
        scanf("%i", &dig);

        if (dig < 0 || dig > 2)
            printf("error o digito deve ser 0 ou 1");
        else
        {
            if( dig == 0)
                dempre += 1;
            else if ( dig == 1)
                empre += 1;
            else

            {
                habitantes += 1;
                pempre = (float) empre / habitantes * 100;
                pdempre = (float) dempre / habitantes * 100;
                printf("TOTAL:\n");
                printf("EMPREGADOS: (%.1f %%)\n",
                       pempre);
                printf("DESEMPREGADOS: (%.1f %%)\n",
                       pdempre);

            }
        }


    }


while( habitantes > 3);



return 0;
}

