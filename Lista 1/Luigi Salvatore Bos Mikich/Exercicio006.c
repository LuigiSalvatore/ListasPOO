// Nome Arquivo: Exercicio006.c
// Nome autor: Luigi Salvatore Bos-Mikich
// Finalidade do Programa: Inverter Inteiros
// Versão: 1.0
// data: 02/03/2023
#include <stdio.h>
int inverte_int(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", inverte_int(n));
    return 0;
}
int inverte_int(int n)
{
    int b = 0, result = 0;

    while (n)
    {
        b = n % 10;
        n = n / 10;
        result = result * 10 + b;
    }
    return result;
}