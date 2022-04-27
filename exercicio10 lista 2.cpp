/*aluno: Alan Valsko Portes
RA: 118487
Exercício 10 */

#include <stdio.h>
#include <iostream>
using namespace std;

void caminho_vendedor(int i,int j,char *cidades, float *d);

int main () {
int i, j, k, m;
float distancias[10][10],menor_distancia;
char cidades[10][60];
do {
printf ("Digite a quantidade de cidades: ");
scanf ("%d", &m);
} while (m<2 || m>10);
for (i=0; i<m; i++) {
printf ("Digite o nome da cidade %d", i+1);
scanf ("%s", cidades [i]);
}
for (i=0; i<m; i++) {
for (j=0; j<m; j++) {
if (i==j)distancias[i][j] = 0;
else {
printf ("\nInforme a distancia entre %s e %s: ",cidades[i], cidades[j]);
scanf ("%f", &distancias[i][j]);
}
}
}
for (i=0; i<m; i++) {
for (j=0; j<m; j++) {
if (i!=j){
if ( menor_distancia>distancias[i][j]){
menor_distancia=distancias[i][j];
}
}
}
}
printf("\n\nmenor distancia:%3.2f cidade = %s e cidade = %s", menor_distancia,cidades[i],cidades[j]);

caminho_vendedor(i,j,*cidades,*distancias);

for (i=0; i<m; i++) {
for (j=0; j<m; j++) {
if (i!=j) {
printf ("Cidade: %s km   Cidade %s      Distãncia: %f\n", cidades[i], cidades[j], distancias[i][j]);
}
}
}
}

void caminho_vendedor(int i,int j,char *cidades, float *d)
{
int qtde, aux[10];
float total_d;
printf("digite a quantidade de cidades que o vendedor percorrera: ");
scanf("%d",&qtde);
for(i=0;i<qtde;i++)
{
printf("digite quais sao as posicoes das cidades no vetor: ");
scanf("%d", &aux[i]);
}

for(i=0;i<qtde;i++){
  total_d = total_d + d[cidades[aux[i]]];
}

printf("distancia= %2.2f\n",total_d);
for(i=0;i<qtde;i++){
printf("cidades percorridas = %s\n", cidades[aux[i]]);
}
}
