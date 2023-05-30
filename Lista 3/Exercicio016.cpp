// Exercicio016.cpp
#include <iostream>
using namespace std;
class Elevador
{
private:
    int andar;
    int totalAndares;
    int capacidadeTotal;
    int capacidadeAtual;

public:
    Elevador(int tA = 0, int cT = 0)
    {
        andar = 0;
        capacidadeAtual = 0;
        totalAndares = tA;
        capacidadeTotal = cT;
#ifdef DEBUG
        cout << "+ Elevador andar: " << a << " total de andares: " << tA << " Capacidade Total: " << cT << " Capacidade Atual: " << cA << endl;
#endif
    }

    void entra()
    {
        if (capacidadeAtual < capacidadeTotal)
        {
            capacidadeAtual++;
        }
    }
    void sai()
    {
        if (capacidadeAtual > 0)
            capacidadeAtual--;
    }
    void sobe()
    {
        if (andar < totalAndares)
            andar++;
    }
    void desce()
    {
        if (andar > 0)
            andar--;
    }

    int obtemAndarAtual() { return andar; }
    int obtemTotalAndares() { return totalAndares; }
    int obtemCapacidade() { return capacidadeTotal; }
    int obtemNumPessoas() { return capacidadeAtual; }

    void defineCapacidade(int cT) { capacidadeTotal = cT; }
    void defineTotalAndares(int tA) { totalAndares = tA; }

    void movimenta(string action)
    {
        int i = 0;
        while (action[i] != '\0')
        {
            if (action[i] == '^')
            {
                sobe();
            }
            if (action[i] == 'v')
            {
                desce();
            }
            if (action[i] == '+')
            {
                entra();
            }
            if (action[i] == '-')
            {
                sai();
            }
            i++;
        }
    }
};
int main()
{
    Elevador *e;
    int capacidade, totalAndares;
    string operacao;
    // LEITURA
    cin >> capacidade;
    cin >> totalAndares;
    cin >> operacao;
    // TESTE DE FUNCIONAMENTO
    e = new Elevador();
    if (e->obtemAndarAtual() != 0 || e->obtemCapacidade() != 0 ||
        e->obtemNumPessoas() != 0 || e->obtemTotalAndares() != 0)
        return 1;
    e->defineCapacidade(capacidade);
    if (e->obtemAndarAtual() != 0 || e->obtemTotalAndares() != 0 ||
        e->obtemNumPessoas() != 0 || e->obtemCapacidade() != capacidade)
        return 1;
    e->defineTotalAndares(totalAndares);
    if (e->obtemAndarAtual() != 0 || e->obtemTotalAndares() != totalAndares ||
        e->obtemNumPessoas() != 0 || e->obtemCapacidade() != capacidade)
        return 1;
    for (int i = 0; i <= totalAndares + 2; ++i)
    {
        e->sobe();
        if (e->obtemAndarAtual() > totalAndares)
            return 1;
    }
    for (int i = 0; i <= totalAndares + 2; ++i)
    {
        e->desce();
        if (e->obtemAndarAtual() < 0)
            return 1;
    }
    for (int i = 0; i <= capacidade + 2; ++i)
    {
        e->entra();
        if (e->obtemNumPessoas() > capacidade)
            return 1;
    }
    for (int i = 0; i <= capacidade + 2; ++i)
    {
        e->sai();
        if (e->obtemNumPessoas() < 0)
            return 1;
    }
    // OPERACAO
    e->movimenta(operacao);
    // SAIDA
    cout << e->obtemNumPessoas() << " " << e->obtemAndarAtual() << endl;
    delete e;
    return 0;
}