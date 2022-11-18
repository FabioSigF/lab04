#include <stdio.h>
/*5. Faça um programa que peça ao usuário 
para digitar 10 valores e some-os.*/
int main()
{
    int i = 1;
    float n, calc = 0;
    do
    {
        printf("Digite o %d numero: ", i);
        scanf("%f", &n);
        calc += n;
        i++;
        
    } while (i <= 10);
    printf("A soma dos numeros digitados foi: %.2f", calc);
    return 0;
}