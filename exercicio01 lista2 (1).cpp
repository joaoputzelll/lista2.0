/*aluno: Alan Valsko Portes
RA: 118487
Exerc�cio 01 */

#include <iostream>
#include<locale.h>
using namespace std;

int main()
{
setlocale(LC_ALL, "");
int tam,i;

cout<<"digite a quantidade de valores para o vetor x: ";
cin>> tam;

int vet[tam];
for(i=0;i<=tam-1;i++)
{
printf("valor do vetor: ");
cin>>vet[i];
}
for(i=0;i<=tam-1;i++)
{
if(vet[i] < 0)
        {
            printf("A posicao do primeiro numero negativo �: %d",i);
            return 0;
        }
        else
        {
            printf("n�o existe valor negativo");
        }
}
return 0;
}
