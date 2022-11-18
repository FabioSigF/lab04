#include <stdio.h>
/*8. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/

int main()
{
  int i, num, maior, menor;
  i = 1;
  do
  {
    printf("Digite o %do numero inteiro: ", i);
    scanf("%d", &num);
    if (i == 1)
    {
      menor = maior = num;
    }
    if (num > maior)
    {
      maior = num;
    }
    if (num < menor)
    {
      menor = num;
    }
    i++;
  } while (i <= 10);
  printf("O maior numero foi %d e o menor foi %d.", maior, menor);

  return 0;
}