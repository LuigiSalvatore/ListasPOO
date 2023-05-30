// Nome Arquivo: Exercicio007.c
// Nome autor: Luigi Salvatore Bos-Mikich
// Finalidade do Programa: conta quantas palavras com 7 letras existem entre 50 palavras
// Versão: 1.0
// data: 07/03/2023
#include <stdio.h>
#include <string.h>

#define palavras 50
#define tamanho 21
int main()
{
    char pal[tamanho];
    int letras = 0;
    for (int i = 0; i < palavras; i++)
    {
        scanf("%s", pal);
        if (strlen(pal) == 7)
            letras++;
    }
    printf("%d", letras);
    return 0;
}
// int Count()
// {
//     char pal[tamanho];

//     int letras = 0;
//     for (int i = 0; i < palavras; i++)
//     {
//         scanf("%s", pal);
//         if (strlen(pal) == 7)
//         {
//             letras++;
//         }
//     }
//     return letras;
// }

// void main()
// {
//     int result = 0, WordCount = 0;
//     char *Pal[] = {0};
//     for (; WordCount < 51; WordCount++)
//     {
//         gets(Pal);
//         // printf("%s\n", Pal);
//         result = result + GetCount(Pal);
//         // printf("%d\n", WordCount);
//     }
//     printf("%d\n", result);
// }

// int GetCount(char *Pal[])
// {
//     int val = 0, LetterCount = 0;
//     val = strlen(Pal);
//     return val == 7;
// }
