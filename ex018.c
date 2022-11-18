#include <stdio.h>
/*18. Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996
recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do
ano anterior. Faça programa que determine o salário atual do funcionário*/
int main()
{
  float sal, aum;
  int i;
  sal = 2000;
  aum = sal * 0.015;
  for(i = 1997; i <= 2022; i++)
  {
    aum = (sal * 0.015) * 2;
    sal += aum;
    printf("Ano %d. O salario agora eh: R$%.2f. O aumento foi de R$%.2f.\n", i, sal, aum);
  }

  return 0;
}