// Nome Arquivo: Exercicio008.c
// Nome autor: Luigi Salvatore Bos-Mikich
// Finalidade do Programa: Ver o melhor carro
// Versão: 2.0
// data: 15/03/2023

#include <stdio.h>

struct motor
{
    int cc, potencia, cilindros;
};
struct carro
{
    char modelo[45];
    int ano;
    char transmissao; // M = manual, A = automatica
    int km;
    char combustivel; // F = flex, G = gasolina, D = diesel
    int numportas;
    struct motor m;
    double preco;
};
struct carro revenda[20] = {
    {"Chevrolet Celta 1.0 MPFI 8V", 2015, 'M', 72660, 'F', 3, {999, 70, 4}, 39900.0},
    {"Chevrolet Onix 1.0 LT 8V Hatch", 2018, 'M', 94094, 'F', 4, {999, 82, 4}, 56900.0},
    {"Chevrolet S10 2.8 LT 4x4 CD 16V Turbo", 2018, 'A', 93649, 'D', 4, {2776, 200, 4}, 170900.0},
    {"Fiat Argo 1.0 Drive 6V", 2020, 'M', 35994, 'F', 4, {999, 77, 3}, 64900.0},
    {"Fiat Palio 1.8 MPI Adventure Weekend 16V", 2014, 'M', 123738, 'F', 4, {1747, 132, 4}, 49900.0},
    {"Fiat Siena 1.4 MPI EL 8V", 2012, 'M', 137570, 'F', 4, {1368, 86, 4}, 34900.0},
    {"Fiat Siena 1.6 MPI Essence 16V", 2012, 'M', 152349, 'F', 4, {1598, 117, 4}, 36900.0},
    {"Fiat Siena 1.0 MPI EL 8V", 2011, 'M', 339237, 'F', 4, {999, 75, 4}, 26900.0},
    {"Fiat Uno 1.0 Attractive 8V", 2020, 'M', 80565, 'F', 4, {999, 75, 4}, 50900.0},
    {"Fiat Uno 1.4 Way 8V", 2014, 'M', 143131, 'F', 4, {1368, 85, 4}, 40900.0},
    {"Ford Ecosport 1.5 SE 12V", 2018, 'M', 63866, 'F', 4, {1497, 137, 3}, 76900.0},
    {"Ford Ecosport 2.0 Freestyle 4WD 16V", 2017, 'M', 118177, 'F', 4, {1999, 147, 4}, 74900.0},
    {"Ford Ecosport 1.6 XLS 8V", 2011, 'M', 153671, 'F', 4, {1598, 111, 4}, 43900.0},
    {"Honda Civic 1.8 LXS Sedan 16V", 2007, 'A', 124170, 'G', 4, {1799, 140, 4}, 46900.0},
    {"Honda HR-V 1.8 EXL Flexone 16V", 2016, 'A', 58820, 'F', 4, {1799, 139, 4}, 95900.0},
    {"Hyundai HB20 1.6 Comfort Style 16V", 2018, 'M', 71299, 'F', 4, {1591, 128, 4}, 65900.0},
    {"Hyundai IX35 2.0 MPI 4x2 16V", 2012, 'A', 140865, 'G', 4, {1998, 178, 4}, 70900.0},
    {"Hyundai Santa Fe 3.3 GLS 4x4 V6 Triptronic", 2018, 'A', 95394, 'G', 4, {3342, 270, 6}, 156900.0},
    {"Hyundai Sonata 2.4 GLS 16V", 2012, 'A', 134467, 'G', 4, {2359, 182, 4}, 69900.0},
    {"Jeep Renegade 1.8 Sport 4x2", 2016, 'M', 93352, 'F', 4, {1747, 130, 4}, 76900.0}};

int main()
{
    char comb = 0;
    int cilindro = 0;
    double preco = 0;
    scanf("%c %d %lf", &comb, &cilindro, &preco);

    int quantidade_de_carros = 0;
    for (int i = 0; i < 20; i++)
    {
        if (comb == revenda[i].combustivel) // search for gas type
        {
            if (cilindro == revenda[i].m.cilindros) // search for cylinder
            {
                if (preco >= revenda[i].preco) // search for price
                {
                    quantidade_de_carros++;
                }
            }
        }
    }
    printf("%d", quantidade_de_carros);
    return 0;
}