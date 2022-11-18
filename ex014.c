#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*14. Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento*/

int main()
{
  int d1, d2, n, i;
  printf("Quantas vezes quer jogar os dados? ");
  scanf("%d", &n);

  srand(time(NULL));

  for (i = 1; i <= n; i++)
  {
    d1 = rand() % 6 + 1;
    d2 = rand() % 6 + 1;
    printf("Dado 1: %d \nDado 2: %d\n", d1, d2);
    if (d1 > d2)
    {
      printf("O dado 1 foi maior que o dado 2.\n\n");
    }
    else if (d1 == d2)
    {
      printf("O dado 1 foi igual ao dado 2.");
    }
    else
    {
      printf("O dado 1 foi menor que o dado 2.\n\n");
    }
  }
  return 0;
}