#include <stdio.h>
/*2. Escreva um programa que escreva na tela, 
de 1 até 100, de 1 em 1, 3 vezes. 
A primeira vez deve usar a estrutura de repetição
 for, a segunda while, e a terceira do-while.*/
int main()
{
    int i, num = 0;
    puts("Repeticao com for:\n");
    for(i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
    }
    putchar("\n");
    puts("Repeticao com while:\n");
    i = 1;
    while(i <= 100)
    {
        printf("%d\n", i);
        i++;
    }
    putchar("\n");
    puts("Repeticao com do/while:\n");
    i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while(i <= 100);
    return 0;
}