#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>
int main(void)
{
  int i;

  printf("Numeros da loteria:\n\n");


  srand(time(NULL));

  for (i=0; i < 6; i++)
  {

    printf("%d ", rand() % 100);
  }

  getch();
  return 0;
}
