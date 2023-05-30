/*
- Exercicio 03
- Luigi Salvatore Bos-Mikich, Programação orientada a objetos, 18/05/2023
- Lista 7
- Sala de entrega https://moodle.pucrs.br/mod/assign/view.php?id=2669612
*/
#include <iostream>
#include <iomanip>
#include "Equipe.hpp"

using namespace std;

void imprimeClube(Clube *c)
{
    cout << "Abreviatura: " << c->obtemAbreviatura() << endl;
    cout << "Nome: " << c->obtemNome() << endl;
    cout << "Nome completo: " << c->obtemNomeCompleto() << endl;
    cout << "Cidade: " << c->obtemCidade() << endl;
    cout << "Estado: " << c->obtemEstado() << endl;
    cout << "----------" << endl;
}

void imprimeEquipe(Equipe *e)
{
    cout << "Abreviatura: " << e->obtemAbreviatura() << endl;
    cout << "Nome: " << e->obtemNome() << endl;
    cout << "Nome completo: " << e->obtemNomeCompleto() << endl;
    cout << "Cidade: " << e->obtemCidade() << endl;
    cout << "Estado: " << e->obtemEstado() << endl;
    cout << "Pontos: " << e->obtemPontos() << endl;
    cout << "Jogos: " << e->obtemJogos() << endl;
    cout << "Vitorias: " << e->obtemVitorias() << endl;
    cout << "Empates: " << e->obtemEmpates() << endl;
    cout << "Derrotas: " << e->obtemDerrotas() << endl;
    cout << "Gols Feitos: " << e->obtemGolsFeitos() << endl;
    cout << "Gols Tomados: " << e->obtemGolsTomados() << endl;
    cout << "----------" << endl;
}

int main()
{
    Clube bah("BAH", "Bahia", "Esporte Clube Bahia", "Salvador", "BA");
    imprimeClube(&bah);
    Clube fla;
    imprimeClube(&fla);
    fla.defineAbreviatura("FLA");
    fla.defineNome("Flamengo");
    fla.defineNomeCompleto("Clube de Regatas do Flamengo");
    fla.defineCidade("Rio de Janeiro");
    fla.defineEstado("RJ");
    imprimeClube(&fla);

    Equipe flu("FLU", "Fluminense", "Fluminense Football Club", "Rio de Janeiro", "RJ");
    flu.registraJogo(0, 0);
    flu.registraJogo(1, 0);
    flu.registraJogo(2, 2);
    flu.registraJogo(1, 0);
    flu.registraJogo(1, 1);
    flu.registraJogo(0, 1);
    flu.registraJogo(1, 1);
    flu.registraJogo(1, 4);
    flu.registraJogo(1, 0);
    flu.registraJogo(0, 0);
    flu.registraJogo(2, 1);
    flu.registraJogo(0, 1);
    flu.registraJogo(0, 1);
    flu.registraJogo(0, 1);
    flu.registraJogo(2, 4);
    flu.registraJogo(1, 1);
    flu.registraJogo(2, 0);
    flu.registraJogo(1, 1);
    flu.registraJogo(2, 1);
    flu.registraJogo(2, 1);
    flu.registraJogo(2, 2);
    flu.registraJogo(2, 1);
    flu.registraJogo(0, 2);
    flu.registraJogo(0, 0);
    imprimeEquipe(&flu);
    Equipe cap;
    imprimeEquipe(&cap);
    cap.defineAbreviatura("CAP");
    cap.defineNome("Athletico-PR");
    cap.defineNomeCompleto("Club Athletico Paranaense");
    cap.defineCidade("Curitiba");
    cap.defineEstado("PR");
    cap.registraJogo(1, 0);
    cap.registraJogo(3, 0);
    cap.registraJogo(1, 0);
    cap.registraJogo(2, 1);
    cap.registraJogo(1, 2);
    cap.registraJogo(2, 2);
    cap.registraJogo(4, 1);
    cap.registraJogo(2, 1);
    cap.registraJogo(1, 2);
    cap.registraJogo(2, 2);
    cap.registraJogo(0, 1);
    cap.registraJogo(2, 1);
    cap.registraJogo(0, 2);
    cap.registraJogo(1, 2);
    cap.registraJogo(0, 1);
    cap.registraJogo(0, 1);
    cap.registraJogo(1, 2);
    cap.registraJogo(0, 0);
    cap.registraJogo(0, 2);
    cap.registraJogo(2, 1);
    cap.registraJogo(4, 2);
    cap.registraJogo(0, 3);
    cap.registraJogo(2, 0);
    cap.registraJogo(0, 2);
    imprimeEquipe(&cap);

    return 0;
}
