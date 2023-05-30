// Nome Arquivo: Exercicio007.cpp
// Nome autor: Luigi Salvatore Bos-Mikich
// Finalidade do Programa: Calcula a media, peso > 90kg && altura > 1,90m e a porcentagem de pessoas com idade entre 10 e 30 anos em quem mede > 1,90.
// Versão: 1.0
// data:

#include <iostream>
#include <iomanip>
#define tamanho 10
using namespace std;
class Pessoa
{
private:
    int idade;
    float altura,
        peso;

public:
    int getIdade() { return idade; }
    void defIdade(int v) { idade = v; }

    float getPeso() { return peso; }
    void defPeso(float v) { peso = v; }

    float getAltura() { return altura; }
    void defAltura(float v) { altura = v; }
};

Pessoa pessoas[tamanho];
void getValues();
int main(void)
{
    float mediaIdade = 0,
          jovens = 0;
    int gordos = 0, aux = 0;

    // getValues();
    for (int i = 0; i < tamanho; i++)
    {
        int idade;
        float peso, altura;
        cin >> idade >> peso >> altura;
        pessoas[i].defIdade(idade);
        pessoas[i].defPeso(peso);
        pessoas[i].defAltura(altura);
    }

    // media das idades
    for (int i = 0; i < tamanho; i++)
        mediaIdade += pessoas[i].getIdade();
    mediaIdade /= tamanho;

    // peso superior a 90kg e altura inferior a 1.50m
    for (int i = 0; i < tamanho; i++)
    {
        if (pessoas[i].getPeso() > 90 && pessoas[i].getAltura() < 1.50)
        {
            gordos++;
        }
    }

    // porcentagem de pessoas entre 10 e 30 e medem mais de 1.90m
    for (int i = 0; i < tamanho; i++)
    {
        // if ((pessoas[i].getIdade() > 10 && pessoas[i].getIdade() < 30) && pessoas[i].getAltura() > 1.90)
        if (pessoas[i].getAltura() > 1.90)
        {
            aux++;
            if (pessoas[i].getIdade() > 10 && pessoas[i].getIdade() < 30)
            {
                jovens++;
            }
        }
    }
    jovens = (jovens / aux) * 100;
    cout.precision(4);
    cout << fixed;
    cout << mediaIdade << " " << gordos << " " << jovens << endl;
}
void getValues()
{
    // for (int i = 0; i < tamanho; i++)
    // {
    //     int idade;
    //     float peso, altura;
    //     cin >> idade >> peso >> altura;
    //     pessoas[i].defIdade(idade);
    //     pessoas[i].defPeso(peso);
    //     pessoas[i].defAltura(altura);
    // }
}
