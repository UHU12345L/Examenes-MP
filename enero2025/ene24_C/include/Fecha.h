#ifndef FECHA_H
#define FECHA_H
#include <iostream>
using namespace std;

class Fecha
{
    int dia, mes, anio;
public:
    Fecha(int d, int m, int a);
    Fecha(const Fecha &f);
    Fecha& operator=(const Fecha& f);
    void setFecha(int d, int m, int a);
    int getDia() const;
    int getMes() const;
    int getAnio() const;
    friend ostream& operator<<(ostream &s, const Fecha &f);
};
#endif // FECHA_H
