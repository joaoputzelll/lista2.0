/*aluno: Alan Valsko Portes
RA: 118487
Exercício 11 */


#include <stdio.h>
#include <iostream>
#include <math.h>
int fat (int N)
{
int i,f=1;
for(i=1;i<=N;i++)
{
f*=i;

return f;
}

}
float cosseno(float x,int b)
{
int n;
    float c= 0.0;
    for(n=0;n<=b;n++)
    {
      c+= pow(-1,n)*pow(x,2*n)/fat(2*n);
    }
    return c;

}
float seno(float x, int b)
{
  int n;
  float c = 0.0;
  for(n=0;n<=b;n++)
 {
     c+= pow(-1,n)*pow(x,2*n)/fat(2*n);
  }
}

int main()
{
int b;
float ang;
printf("digite a quantidade de termos");
scanf("%d",&b);
printf("digite o angulo ");
scanf("%f", &ang);
printf("cosseno = %f\n",cosseno(ang,b));
printf("seno = %f", seno(ang,b));

}
