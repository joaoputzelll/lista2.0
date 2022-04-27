/*aluno: Alan Valsko Portes
RA: 118487
Exercício 18 */


#include <stdio.h>
int main(void) {
    int tam, i, j, k, soma;
    printf("Informe a dimensao da matriz: ");
    scanf("%i", &tam);
    int mA[tam][tam], mT[tam][tam];

    //ler matriz A
    for (i=0; i<tam; i++) {
        for (j=0; j<tam; j++) {
            scanf("%i", &mA[i][j]);
        }
    }

    //transposta
    for (i=0; i<tam; i++) {
        for (j=0; j<tam; j++) {
            mT[i][j] = mA[j][i];
        }
    }

    //apenas para mostrar os valores das matrizes
    printf("Matriz A\n");
    for (i=0; i<tam; i++) {
        for (j=0; j<tam; j++) {
            printf("%i ", mA[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz A'\n");
    for (i=0; i<tam; i++) {
        for (j=0; j<tam; j++) {
            printf("%i ", mT[i][j]);
        }
        printf("\n");
    }
}
