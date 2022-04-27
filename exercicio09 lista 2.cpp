/*aluno: Alan Valsko Portes
RA: 118487
Exercício 09 */

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#define MAXLINHAS 15
#define MAXCOLUNAS 15

using namespace std;

int main(){

int i, j, n, s_linha, s_coluna;
int refe, A [MAXLINHAS][MAXCOLUNAS];
bool magico;
//INICIO
//LEITURA DA DIMENSAO DA MATRIZ
cout<<"\nEntre com a ordem da matriz quadrada = ";
cin >> n;
//leitura da matriz
for (i=0;i<n;i++){
    printf("Linha %d \n", i+1);
    for(j=0;j<n;j++)
        do{
        printf("Entre com o elemento [%2i,%2i] = ", i+1, j+1);
        scanf("%i",&A[i][j]);
        if(A[i][j]<0)
            cout<<"Valores devem ser nao negativos >= 0! \n";
        }while(A[i][j]<0);
}
//Verificando se a matriz eh quadrado magico
refe=0;
for (j=0;j<n;j++){refe=refe+A[0][j];};//primeira linha
magico = true;
s_linha=0;
s_coluna=0;;
for(i=0;i<n;i++){
    s_linha=0;
    s_coluna=0;;
    for (j=0;j<n;j++){
        s_linha= s_linha+A[i][j];
        s_coluna= s_coluna+A[j][i];
    }
    if((s_linha != refe)||(s_coluna != refe)){
        magico = false;
        i = n; //acabou
    };
};
if(magico){
    s_linha = 0;//DIAGONAL PRINCIPAL
    s_coluna = 0;//DIAGONAL SECUNDARIA
    for(i=0; i<n; i++){
        s_linha= s_linha+A[i][j];
        s_coluna = s_coluna+A[i][n-i-1];
    }
    if((s_linha != refe)||(s_coluna != refe)){
        magico = false;
    }
}
if(magico){
    printf("\n A MATRIZ QUADRADA EH UM -> QUADRADO MAGICO <- \n");
}
else{
    printf("\n A MATRIZ QUADRADA NAO EH UM QUADRADO MAGICO \n");
};
printf("\n Matriz em um formato matricial\n");
for (i=0;i<n;i++){
    printf("\n");
    for(j=0;j<n;j++)
        printf("%4i ",A[i][j]);
    printf("\n");
}

system("PAUSE");
}//FIM




