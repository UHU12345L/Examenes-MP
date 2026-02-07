#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <cstring>

using namespace std;

class Fecha
{
    int dia;
    char *mes;
    int anio;
public:
    Fecha(int d, const char* m, int a);
    ~Fecha();
    int getDia()const
    {
        return dia;
    }
    int getAnio()const
    {
        return anio;
    }
    const char* getMes()const;
    bool operator != (const Fecha &f)const;
    Fecha& operator= (const Fecha &f);
    operator int ()const;
    friend ostream& operator<<(ostream &s, const Fecha&f);
};

ostream& operator<<(ostream &s, const Fecha&f);

#endif // FECHA_H
