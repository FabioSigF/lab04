#include <stdio.h>
/*10. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/
int main()
{
  int i, tot;
  tot = 0;
  for (i = 1; i <= 100; i++)
  {
    if (i % 2 == 0)
    {
      tot += i;
    }
  }
  printf("A soma dos primeiros 50 numeros pares eh: %d", tot);
  return 0;
}