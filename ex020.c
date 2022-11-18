#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões*/
int main()
{
    int i, j, prim, rQuad, sPrim;

    prim = 0;
    sPrim = 2;
    for (i = 3; i <= 2000000; i += 2) {
        prim = 1;
        rQuad = sqrt(i); //Só precisa checar até a raiz quadrada do número
        for (j = 3; j <= rQuad; j += 2) { //Números ímpares só são divisíveis por ímpares
            if (i % j == 0) {
                prim = 0;
                break;
            }
        }

        if (prim) {
            sPrim += i;
        }
    }

    printf("A soma dos numeros primos abaixo de 2 milhoes eh: %d\n", sPrim);
    return 0;
}