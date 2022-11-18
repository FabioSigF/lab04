#include <stdio.h>

/*13. Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos de 3 ou 5.*/

int main()
{

  int i, sum;
  sum = 3;
  printf("A soma dos multiplos de 3 e 5 abaixo de 1000 eh: 3");
  for (i = 4; i < 1000; i++)
  {
    if (i % 3 == 0)
    {
      printf(" + %d", i);
      sum += i;
    } 
    else if (i% 5 == 0)
    {
      printf(" + %d", i);
      sum += i;
    }
  }
  printf(" = %d", sum);
  return 0;
}