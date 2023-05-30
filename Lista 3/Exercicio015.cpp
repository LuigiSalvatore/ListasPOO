// Nome Arquivo: Exercicio015.cpp
// Nome autor: Luigi Salvatore Bos-Mikich
// Finalidade do Programa:
// Versão: 1.0
// data:

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;
    double altura;
    double crescimentoAnual;

public:
    Pessoa(int i = 0, int a = 0, double c = 0, string n = "")
    {
        nome = n;
        idade = i;
        altura = a;
        crescimentoAnual = c;
#ifdef DEBUG
        cout << "+ Pessoa Nome: " << n << " idade: " << idade << " altura: " << altura << " crescimentoAnual: " << c << endl;
#endif
    }
    ~Pessoa()
    {
#ifdef DEBUG
        cout << "- Pessoa Nome: " << n << " idade: " << idade << " altura: " << altura << " crescimentoAnual: " << c << endl;
#endif
    }

    string obtemNome()
    {
        return nome;
    }
    void defineNome(string n)
    {
        nome = n;
    }

    int obtemIdade()
    {
        return idade;
    }
    void defineIdade(int i)
    {
        idade = i;
    }

    double obtemAltura()
    {
        return altura;
    }
    void defineAltura(double a)
    {
        altura = a;
    }

    double obtemTaxaCrescimento()
    {
        return crescimentoAnual;
    }
    void defineTaxaCrescimento(double c)
    {
        crescimentoAnual = c;
    }

    void envelhece()
    {
        idade++;
        altura += crescimentoAnual;
    }
};

void le_pessoa(Pessoa *p)
{
    string s;
    getline(cin, s);
    p->defineNome(s);
    getline(cin, s);
    p->defineIdade(stoi(s));
    getline(cin, s);
    p->defineAltura(stod(s));
    getline(cin, s);
    p->defineTaxaCrescimento(stod(s));
}
void imprime_pessoa(Pessoa *p)
{
    cout << p->obtemNome() << " (";
    cout << p->obtemIdade() << " anos; ";
    cout << fixed << setprecision(4);
    cout << p->obtemAltura() << " cm; ";
    cout << p->obtemTaxaCrescimento() << " cm)" << endl;
}
int main()
{
    Pessoa *p1, *p2;
    // LEITURA
    p1 = new Pessoa();
    le_pessoa(p1);
    p2 = new Pessoa();
    le_pessoa(p2);
    // ENVELHECIMENTO
    for (int i = 0; i < 5; ++i)
    {
        p1->envelhece();
        p2->envelhece();
    }
    // RESULTADOS
    if (p1->obtemAltura() > p2->obtemAltura())
        imprime_pessoa(p1);
    else if (p1->obtemAltura() < p2->obtemAltura())
        imprime_pessoa(p2);
    else
    {
        imprime_pessoa(p1);
        imprime_pessoa(p2);
    }
    delete p2;
    delete p1;
}