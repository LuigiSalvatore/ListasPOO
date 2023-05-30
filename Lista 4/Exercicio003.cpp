#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

#define MAX_PRODUTOS 10

class Produto
{ /* implementacao da classe Produto */
private:
    int codigo;
    string descricao;
    int numEstoque;
    double preco;

public:
    Produto(int c = 0, string d = "", int n = 0, double p = 0)
    {
        codigo = c;
        descricao = d;
        numEstoque = n;
        preco = p;
    }

#pragma region

    int obtemCodigo()
    {
        return codigo;
    }
    string obtemDescricao() { return descricao; }
    int obtemQuantidade() { return numEstoque; }
    double obtemValorUnitario() { return preco; }
    void defineCodigo(int c) { codigo = c; }
    void defineDescricao(string d) { descricao = d; }
    void defineQuantidade(int q) { numEstoque = q; }
    void defineValorUnitario(double v) { preco = v; }
#pragma endregion
};

class Estoque
{ /* implementacao da classe Estoque */
private:
    Produto *v[10];

public:
    string str()
    {
        return " ";
        fixed;
        setprecision(2);
        cout << "[" << codigo << "]" << descricao << ": " << numEstoque << "x" << preco << endl;
    }
#pragma region
    void defineDeposito()
    {
    }
    // idk obtemDeposito() {}
    void adicionaProduto(Produto *p)
    {
        for (int i = 0; v[i] != 0 && i < 10; i++)
    }
    // idk obtemProduto() {}

#pragma endregion
};

int main()
{
    Produto *produto[] = {
        new Produto(1, "Cimento CP IV 32 25kg Votoran", 500, 17.29),
        new Produto(2, "Cimento CPB-40 Branco Estrutural 15kg Axton", 100, 72.90),
        new Produto(3, "Rejunte Ceramica Ceramfix Marfim 1kg", 50, 7.00),
        new Produto(4, "Luva PVC Branco Rosca 1/2\" 20mm Plastilit", 60, 1.47),
        new Produto(5, "Luva PVC Marrom Solda 1\" 32mm Tigre", 30, 2.79),
        new Produto(6, "Meio Bloco Ceramico 6 Furos 9x14x12cm Olaria Estancia", 10000, 0.76),
        new Produto(7, "Bloco de Concreto Celular Autoclavado 60x30x10cm Sical", 1000, 13.99),
        new Produto(8, "Telha Ceramica 40x22,5cm Francesa Esmaltada Chumbo Vogel", 300, 2.79),
        new Produto(9, "Telha Ceramica 41x24cm Portuguesa Natural Claudio Vogel", 1000, 0.94),
        new Produto(10, "Janela de Correr Aluminio Pintado Preto Fosco 1,00x1,50m Linha Confort Brimak", 10, 574.90),
        new Produto(11, "Folha de Porta de Giro Branco 2,10x0,70m Artens", 5, 219.90)};
    int numProdutos = sizeof(produto) / sizeof(Produto *);

    Estoque *estoque = new Estoque("Provisorio");
    cout << estoque->str() << endl;

    estoque->defineDeposito("Deposito Geral");
    int p;
    // Insere 5 produtos
    for (p = 0; p < 5; ++p)
        if (!estoque->adicionaProduto(produto[p]))
        {
            cerr << "ERRO";
            exit(1);
        }
    // Testa se os 5 produtos foram inseridos
    for (p = 0; p < 5; ++p)
        if (estoque->obtemProduto(p) != produto[p])
        {
            cerr << "ERRO";
            exit(1);
        }
    // Testa se ha outros itens no estoque
    for (; p < numProdutos; ++p)
        if (estoque->obtemProduto(p) != nullptr)
        {
            cerr << "ERRO";
            exit(1);
        }
    cout << estoque->str() << endl;

    // Adiciona mais 5 produtos
    for (p = 5; p < MAX_PRODUTOS; ++p)
        if (!estoque->adicionaProduto(produto[p]))
        {
            cerr << "ERRO";
            exit(1);
        }
    // Tenta adicionar produtos alem do limite
    for (; p < numProdutos; ++p)
        if (estoque->adicionaProduto(produto[p]))
        {
            cerr << "ERRO";
            exit(1);
        }
    // Testa se os 10 produtos estao inseridos
    for (p = 0; p < MAX_PRODUTOS; ++p)
        if (estoque->obtemProduto(p) != produto[p])
        {
            cerr << "ERRO";
            exit(1);
        }
    cout << estoque->str() << endl;

    delete estoque;
    for (int p = 0; p < numProdutos; ++p)
        delete produto[p];

    return 0;
}
