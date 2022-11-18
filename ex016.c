#include <stdio.h>
/*
16. Faça um programa que apresente um menu de opções para o cálculo das seguintes
operações entre dois números:
 Adição (opção 1)
 Subtração (opção 2)
 Multiplicação (opção 3)
 Divisão (opção 4).
 Saída (opção 5)
O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado
e a volta ao menu de opções. O programa só termina quando for escolhida a opção de saída
(opção 5).*/
int main()
{
  int opt;
  float n1, n2, calc;
  printf("Digite o 1o numero: ");
  scanf("%f", &n1);
  printf("Digite o 2o numero: ");
  scanf("%f", &n2);
  do
  {
    printf("Selecione a sua operacao:\n[1] Adicao\n[2] Subtracao\n[3] Multiplicacao\n[4] Divisao\n[5]Saida\nR= ");
    scanf("%d", &opt);
    if (opt < 1 || opt > 5)
    {
      printf("Opcao invalida. Tente novamente!");
    }
    else if (opt != 5)
    {
      switch (opt)
      {
      case 1:
        calc = n1 + n2;
        break;
      case 2:
        calc = n1 - n2;
        break;
      case 3:
        calc = n1 * n2;
        break;
      case 4:
        calc = n1 / n2;
        break;

      default:
        break;
      }

      printf("O calculo entre %.2f e %.2f foi %.2f.\n", n1, n2, calc);
    }
    else {
      printf("Opcao de sair selecionada. FIM DO PROGRAMA!");
    }
  } while (opt != 5);
  return 0;
}