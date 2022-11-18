#include <stdio.h>
/*22.Faça um programa que calcule o maior número palíndromo feito a partir do produto de dois
números de 3 dígitos. Ex.: O maior palíndromo feito a partir do produto de dois números de dois
dígitos é 9009 = 91*99.
*/
int main()
{
  int i = 999, j, nCalc, nt, ni, im, jm, mnp = 0;
  for (nCalc = i * i; nCalc > mnp; nCalc = i * i){
        for (j = i; nCalc> mnp; nCalc= i * j){
            ni = 0;
            for (nt = nCalc; nt > 0; nt /= 10){
                ni = ni * 10 + nt % 10;
            }
            if (nCalc== ni) {
                    mnp = nCalc;
                    im = i;
                    jm = j;
            }
            j--;
        }
        i--;
    }
    printf("Maior numero palindromo: %d = %d x %d\n", mnp, im, jm);
  return 0;
}