// Nome Arquivo: Exercicio010.c
// Nome autor: Luigi Salvatore Bos-Mikich
// Finalidade do Programa:
// Versão: 2.0
// data: 15/03/2023
#include <stdio.h>
#define tamanho 50

int main(void)
{

    int A[tamanho], maxSequencia = 0, contador = 0;

    for (int i = 0; i < tamanho; i++)
        scanf("%d", &A[i]); // porque preciso colocar o & antes do vetor? achei que quando era vetor ele mandava direto no endereço...

    for (int i = 0; i < tamanho; i++)
    {
        if (A[i] % 2 != 0)
        {
            contador++;
            if (contador > maxSequencia)
                maxSequencia = contador;
        }
        else
            contador = 0;
    }
    printf("%d ", maxSequencia);
}