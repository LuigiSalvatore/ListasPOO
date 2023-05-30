// Nome Arquivo: Exercicio010.cpp
// Nome autor: Luigi Salvatore Bos-Mikich
// Finalidade do Programa:
// Versão: 1.0
// data:

#include <iostream>
#include <iomanip>

using namespace std;

typedef struct
{
    int dia, mes, ano;
} Data;

bool ehDataValida(Data data)
{
    int diasNoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    bool bi = (data.ano % 4 == 0 && data.ano % 100 != 0) || (data.ano % 400 == 0);
    if (data.mes < 1 || data.mes > 12)
        return false;
    if (data.dia < 1 || data.dia > diasNoMes[data.mes - 1] + (bi && data.mes == 2 ? 1 : 0))
        return false;
    return true;
}

void lerDatas(int len, Data *vec)
{
    for (int i = 0; i < len; i++)
    {
        cin >> vec[i].dia >> vec[i].mes >> vec[i].ano;
    }
}

double dataPonderada(Data data)
{
    double aux = data.dia + data.mes * 30 + data.ano * 30 * 12;
    return aux;
}

void dataValida(Data data)
{
    if (ehDataValida(data))
        cout << "+" << endl;
    else
        cout << "-" << endl;
}

void printData(Data data)
{
    cout << setw(2) << setfill('0') << data.dia;
    cout << "/";
    cout << setw(2) << setfill('0') << data.mes;
    cout << "/";
    cout << setw(4) << setfill('0') << data.ano;
}

int main(void)
{
    int len = 5;
    Data datas[len];
    lerDatas(len, datas);

    Data antiga = datas[0];
    for (Data data : datas)
    {
        double f = dataPonderada(antiga);
        double s = dataPonderada(data);
        if (s < f)
            antiga = data;
        dataValida(data);
    }

    if (ehDataValida(antiga))
        printData(antiga);
    else
        cout << "*";

    return 0;
}