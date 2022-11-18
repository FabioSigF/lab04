#include <stdio.h>
/*19. Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de
um banco e retorne quantas notas de cada valor serão necessárias para atender ao saque com
a menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real.
*/
int main()
{
  int i, tot, saque;
  printf("Digite o valor do saque realizado: ");
  scanf("%d", &saque);
  if (saque <= 0)
  {
    printf("Valor invalido. FIM DO PROGRAMA!");
  }
  else
  {
    tot = saque;
    printf("Serao utilizadas:\n");
    while (tot > 0)
    {
      if (tot >= 100)
      {
        i = tot / 100;
        tot -= i * 100;
        printf("  %d notas de R$100;\n", i);
      }
      else if (tot >= 50)
      {
        i = tot / 50;
        tot -= i * 50;
        printf("  %d notas de R$50;\n", i);
      }
      else if (tot >= 20)
      {
        i = tot / 20;
        tot -= i * 20;
        printf("  %d notas de R$20;\n", i);
      }
      else if (tot >= 10)
      {
        i = tot / 10;
        tot -= i * 10;
        printf("  %d notas de R$10;\n", i);
      }
      else if (tot >= 5)
      {
        i = tot / 5;
        tot -= i * 5;
        printf("  %d notas de R$5;\n", i);
      }
      else if (tot >= 2)
      {
        i = tot / 2;
        tot -= i * 2;
        printf("  %d notas de R$2;\n", i);
      }
      else if (tot >= 1)
      {
        i = tot / 1;
        tot -= i * 1;
        printf("  %d notas de R$1;\n", i);
      }
    }
  }

  return 0;
}