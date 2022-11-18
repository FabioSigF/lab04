#include <stdio.h>
/*1. Faça um programa que determine o mostre os
cinco primeiros múltiplos de 3, considerando 
números maiores que 0.*/
int main()
{
    int cont = 1, calc;
    while(cont <= 5)
    {
        calc = 0;
        calc = 3*cont;
        printf("3 x %d = %d\n", cont, calc);
        cont ++;
    }
    return 0;
}