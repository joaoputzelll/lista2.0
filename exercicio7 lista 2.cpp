/*aluno: Alan Valsko Portes
RA: 118487
Exercício 7 */

#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
char nome_empresa[10][60];
int tv[10][12],qtde,i,j,maior,menor,maiorP,menorP,prod_anual[12],aux;
printf ("Digite a quantidade de empresas: ");
        scanf ("%d", &qtde);
        for (i=0; i<qtde; i++) {
        printf ("Digite o nome da empresa %d: ", i+1);
        scanf ("%s", nome_empresa[i]);
    }
    printf("informe a producao de tv de cada empresa na ordem infomada: \n");

for ( i = 0; i <qtde; i++){
        for(j=0; j <12; j++){
                printf("%s: ", nome_empresa[i]);
                scanf("%d",&tv[i][j]);

}
}
maior = 0;
for(i=0;i<qtde;i++){
j=7;
if(maior < tv[i][j]){
       maior = tv[i][j];
       maiorP = i;
}
}
printf("\nmaior producao de agosto foi: %d, da empresa: %s\n", maior,nome_empresa[maiorP]);

maior = tv[0][0];
maiorP = 0;
menor = tv[0][0];
menorP=0;
for(i=0;i<qtde;i++){
aux = 0;
for(j=0;j<12;j++){
aux=aux+tv[i][j];
prod_anual[i] = aux;

}
}
for(i=1;i<qtde;i++){
if (maior<prod_anual[i]){
maior = prod_anual[i];
maiorP = i + 0 ;
}
}
for(j = 1; j<12; j++){
i = maiorP;
if (menor> tv[i][j]){
        menor= tv[i][j];
        menorP = j + 0;
}
}
printf("\nmaior producao do ano foi da empresa: %s e seu pior mes foi: ",nome_empresa[maiorP]);

switch (menorP)
{
case 0:
printf("janeiro");break;
case 1:
printf("fevereiro");break;
case 2:
printf("março");break;
case 3:
printf("abril");break;
case 4:
printf("maio");break;
case 5:
printf("junho");break;
case 6:
printf("julho");break;
case 7:
printf("Agosto");break;
case 8:
printf("Setembro");break;
case 9:
printf("Outubro");break;
case 10:
printf("Novembro");break;
case 11:
printf("Dezembro"); break;

default: printf("mes inexistente");
        break;
}
for(i=0;i<qtde;i++){
printf("\nnome da empresa = %s total anual = %d \n", nome_empresa[i], prod_anual[i]);
}
}


