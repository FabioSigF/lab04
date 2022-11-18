#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*21. Faça um programa que conte quantos números primos existentes entre a e b, onde a e b são
números informados pelo usuário.*/

int main()
{
  int a, b, i, j, prim, tPrim, totPrim = 0;
  totPrim = 0;
  printf("Digite o menor valor do intervalo: ");
  scanf("%d", &a);
  printf("Digite o maior valor do intervalo: ");
  scanf("%d", &b);

  if (a > b)
  {
    printf("Intervalo invalido. FIM DO PROGRAMA!");
  }
  else
  {
    for (i = a; i <= b; i++)
    {
      prim = 0;

      for (j = 1; j <= i; j++)
      {
        if (i % j == 0)
        {
          prim++;
        }
      }
      if (prim == 2)
      {
        tPrim = 1;
        totPrim++;
      }
    }
    printf("Ao total, existem %d numeros primos entre o intervalo de %d e %d.", totPrim, a, b);
  }
  return 0;
}