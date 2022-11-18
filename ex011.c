#include <stdio.h>

/*11. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.*/

int main()
{
  int i, num;
  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &num);

  if(num < 0)
  {
    printf("Numero negativo. FIM DO PROGRAMA!");
  }
  else{
    for(i = 0; i <= num; i++)
    {
      printf("%d, ", i);
    }
  }
  return 0;
}