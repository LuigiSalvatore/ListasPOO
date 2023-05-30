#ifndef _HORA
#define _HORA

#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

class Hora
{
private:
    int hora, minuto, segundo;

public:
    Hora();
    Hora(int h, int m, int s);
    ~Hora();
    int obtemHora() const;
    int obtemMinuto() const;
    int obtemSegundo() const;
    void defineHora(int h);
    void defineMinuto(int m);
    void defineSegundo(int s);
    string str() const;
    Hora operator+(const Hora &hr);
    friend ostream &operator<<(ostream &out, const Hora &h);
    friend istream &operator>>(istream &in, Hora &h);
};

#endif //_HORA