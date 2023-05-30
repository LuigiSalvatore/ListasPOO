#include "Hora.hpp"

Hora::Hora() {}
Hora::Hora(int h, int m, int s) {}
Hora::~Hora() {}
int Hora::obtemHora() const { return hora; }
int Hora::obtemMinuto() const { return minuto; }
int Hora::obtemSegundo() const { return segundo; }
void Hora::defineHora(int h) { hora = h; }
void Hora::defineMinuto(int m) { minuto = m; }
void Hora::defineSegundo(int s) { segundo = s; }
string Hora::str() const
{
    stringstream ss;

    ss << "" << setfill('0') << right << setw(2) << hora
       << ":" << setfill('0') << right << setw(2) << minuto
       << ":" << setfill('0') << right << setw(2) << segundo;
    return ss.str();
}
Hora Hora::operator+(const Hora &hr)
{
    Hora aux;
    aux.defineSegundo(segundo + hr.obtemSegundo());
    aux.defineMinuto(minuto + hr.obtemMinuto());
    aux.defineHora(hora + hr.obtemHora());

    if (aux.obtemSegundo() >= 60)
    {
        aux.defineSegundo(aux.obtemSegundo() - 60);
        aux.defineMinuto(aux.obtemMinuto() + 1);
    }

    if (aux.obtemMinuto() >= 60)
    {
        aux.defineMinuto(aux.obtemMinuto() - 60);
        aux.defineHora(aux.obtemHora() + 1);
    }

    if (aux.obtemHora() >= 24)
    {
        aux.defineHora(aux.obtemHora() - 24);
    }

    return aux;
}
ostream &operator<<(ostream &out, const Hora &h)
{
    out << h.str();
    return out;
}
istream &operator>>(istream &in, Hora &h)
{
    cout << "Hora: ";
    in >> h.hora;
    cout << "Minutos: ";
    in >> h.minuto;
    cout << "Segundos: ";
    in >> h.segundo;
    return in;
}
