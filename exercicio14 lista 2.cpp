/*aluno: Alan Valsko Portes
RA: 118487
Exercício 14 */

#include<stdio.h>
#include<math.h>

using namespace std;

int binario_para_decimal(long long x);

int main (void){

long long x;

cout << "digite o número  em binário";
cin >> x;
cout << x << "binario = " << binario_para_decimal(x) << "decimal";

return 0;
}

int binario_para_decimal(long long x)
{
int total_decimal = 0, i = 0,resto ;
while(x != 0)
{
resto = x % 10;
x /= 10;
total_decimal += resto *pow(2,i);
++i;
}
return total_decimal;

}
