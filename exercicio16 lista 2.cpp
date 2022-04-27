/*aluno: Alan Valsko Portes
RA: 118487
Exercício 16 */


#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <math.h>
using namespace std;
void inverte_vetor(int n, int *vet);
int main()
{
int n, vet[100];

printf("digite o tamanho do vetor: ");
scanf("%d%*c", &n);

for (int i=0; i<n;i++)
{
     printf("entre com vet[%d]= ",i);
    scanf("%d", &vet[i]);
    fflush(stdin);
}
inverte_vetor(n, vet);
}

void inverte_vetor(int n, int *vet)
{
printf("vetor na ordem inversa ");
for(int i = n-1;i>=0;i--){
    printf("%d ",vet[i]);
}
}
