#include <stdio.h>

/*6.Faça um programa que leia 10 inteiros e imprima sua média*/

int main()
{
  int i, num, tot;
  float m;
  i = 1;
  tot = 0;

  do {
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    tot += num;
    i++;
  } while (i <= 10);
  
  m = tot / 10;
  printf("A media dos valores digitados foi: %.2f", m);
  return 0;
}