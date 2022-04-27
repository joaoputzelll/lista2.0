/*aluno: Alan Valsko Portes
RA: 118487
Exercício 15 */

#include<stdio.h>
#include<math.h>

int main()
{
   int num;
   int bin[8];
   int aux;

   printf("Digite o numero decimal para ser convertido para binario: ");
   scanf("%d", &num);

   for (aux = 7; aux >= 0; aux--)
   {
      if (num % 2 == 0)
         bin[aux] = 0;
      else
         bin[aux] = 1;
      num = num / 2;
   }

   for (aux = 0; aux < 8; aux++)
       printf("%d", bin[aux]);

   {

unsigned int num;
	char numEmHexa[10];
	char charHexa[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
			     '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

	printf("\nDigite o numero decimal para ser convertido para Hexadecimal: ");
	scanf("%d", &num);

	numEmHexa[0] = charHexa[ ((num & 0xF0) >> 4) ];
	numEmHexa[1] = charHexa[ (num & 0x0F) ];
	numEmHexa[2] = '\0';

	printf("Numero em hexa: %s\n", numEmHexa);
   }
   printf("\n");

   return 0;
}
