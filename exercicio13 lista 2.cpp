/*aluno: Alan Valsko Portes
RA: 118487
Exercício 13 */

//BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//PROGRAMA PRINCIPAL
int main()
{
    //VAR
    char X[46] ;
    char Y[46] ;
    char intersecao[46];
    int contador = 0;
    int ehRepetido = 0;
    //INICIO DO PROGRAMA
        printf("Escreve uma palavra:");
        scanf("%s", X);
        printf("Escreve outra palavra:");
        scanf("%s", Y);
    for (int i = 0; i < 8; i++)
    {
        for (int o = 0; o < 6; o++)
        {
            if (X[i] == Y[o])
            {
                for (int z = 0; z <= contador; z++)
                {
                    if (intersecao[z] == X[i])
                    {
                        ehRepetido = 1;
                        break;
                    }
                }
                if (ehRepetido == 0)
                {
                    intersecao[contador] = X[i];
                    contador++;
                }
                ehRepetido = 0;
            }
        }
    }
    printf("X: ");
    for (int i = 0; i < 8; i++)
    {
        printf("%c", X[i]);
    }
        printf(" \n");
        printf("Y: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%c", Y[i]);
    }
        printf(" \n");
        printf("Intersecao: ");
    for (int i = 0; i < contador; i++)
    {
        printf("%c", intersecao[i]);
    }
        printf(" \n");

}
//FIM DO PROGRAMA

