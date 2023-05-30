// Nome Arquivo: Exercicio009.cpp
// Nome autor: Luigi Salvatore Bos-Mikich
// Finalidade do Programa:
// Versão: 1.0
// data:

#include <iostream>
#define tamLarg 6
#define tamComp 4

using namespace std;
void printVector(int v[tamLarg][tamComp]);
int main(void)
{
    int vector[tamLarg][tamComp],
        aux = 0;

    for (int i = 0; i < tamLarg; i++) // get vector
    {
        for (int j = 0; j < tamComp; j++)
        {
            cin >> vector[i][j];
        }
    }
    for (int i = 0; i < tamLarg; i++) // see what number is bigger in the vector
    {
        for (int j = 0; j < tamComp; j++)
        {
            if (aux < vector[i][j])
            {
                aux = vector[i][j];
            }
        }
        for (int j = 0; j < tamComp; j++)
        {
            vector[i][j] *= aux;
        }
        aux = 0;
    }
    printVector(vector);
}
void printVector(int v[tamLarg][tamComp])
{ // prints vector
    for (int i = 0; i < tamLarg; i++)
    {
        for (int j = 0; j < tamComp; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}