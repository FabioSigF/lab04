#include <stdio.h>
/*17. Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e cresce 3 centímetros por ano. Escreva um programa que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.
*/
int main()
{
  float ch, zh;
  int i;
  ch = 1.5;
  zh = 1.1;
  i = 0;
  while (zh < ch)
  {
    ch += 0.02;
    zh += 0.03;
    i++;
  }
  printf("Serao necessarios %d anos para Ze ser maior que Chico.", i);
  return 0;
}