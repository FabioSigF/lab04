#include <stdio.h>
/*12. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78*/
int main()
{
  int i, num, sum;
  printf("Digite um numero inteiro: ");
  scanf("%d", &num);

  sum = 1;
  printf("A soma dos divisores do numero %d eh: 1", num);
  for (i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      printf(" + %d", i);
      sum += i;
    }
  }
  printf(" = %d", sum);
  return 0;
}