#include <stdio.h>
#include <math.h>
/*15. Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada de dados com um valor negativo ou zero.*/

int main()
{
  float n, q, c, r;

  do
  {
    printf("Digite um numero (0 ou negativo para cancelar): ");
    scanf("%f", &n);
    if (n > 0)
    {
      q = n * n;
      c = n * n * n;
      r = sqrt(n);

      printf("Sobre o numero %.2f:\n  - Quadrado: %.2f\n  - Cubo: %.2f\n  - Raiz quadrada: %.2f\n\n", n, q, c, r);
    }
    else
    {
      printf("FIM DO PROGRAMA!");
    }
  } while (n > 0);

  return 0;
}