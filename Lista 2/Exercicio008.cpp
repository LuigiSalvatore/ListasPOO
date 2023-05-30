// Nome Arquivo: Exercicio008.cpp
// Nome autor: Luigi Salvatore Bos-Mikich
// Finalidade do Programa:
// Versão: 1.0
// data:

#include <iostream>
#define tamanho 9

using namespace std;

int checkprime(int number, int pos)
{
    int isPrime = 1;

    if (number <= 1)
        isPrime = 0;

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1)
        cout << number << " " << pos << endl;

    return 0;
}

int main(void)
{
    int num[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < tamanho; i++)
    {
        checkprime(num[i], i);
    }
}
