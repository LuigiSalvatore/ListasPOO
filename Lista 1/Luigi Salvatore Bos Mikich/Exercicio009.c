// Nome Arquivo: Exercicio009.c
// Nome autor: Luigi Salvatore Bos-Mikich
// Finalidade do Programa: descobrir quantos 33 tem em um inteiro
// Versão: 1.0
// data: 08/03/2023

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero,
        a = 0,
        b = 0,
        total33 = 0;
    scanf("%d", &numero);
    a = numero % 10;
    numero /= 10;

    while (numero > 0)
    {

        b = numero % 10;

        if ((a == 3) && (b == 3))
            total33++;
        a = b;
        numero /= 10;
    }
    printf("%d", total33);
    return 0;
}

// while (numero > 0)
// {
//     b = numero % 10;
//     if (a == b)
//         contador++;
//     a = b;
//     numero /= 10;
// }
