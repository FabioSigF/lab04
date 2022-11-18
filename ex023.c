#include <stdio.h>
/* Escreva um programa que leia um número inteiro positivo n e em seguida imprima n linhas
do chamado Triangulo de Floyd. Para n = 6, temos:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/
int main()
{
    int n, i, j, num= 1;

    printf("Digite a quantidade de linhas: ");
    scanf("%d",&n);

    for(i=1; i <= n; i++)
    {
        for(j=1; j <= i; ++j)
        {
            printf("%d ", num);
            ++num;
        }

        printf("\n");
    }

    return 0;
}