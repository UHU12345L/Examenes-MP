#ifndef FECHA_H
#define FECHA_H

#include <cstring>
#include "Error.h"

using namespace std;

//corregida para que sea robusta, segura, sirva para cualquier main

class Fecha   //clase inmutable
{
    int dia, anio;
    char *mes;
    static int diasValidos[];
    static const char* mesesValidos[];
public:
    Fecha(int d, char* m, int a) throw (Error);
    ~Fecha();
    Fecha(const Fecha &f);
    Fecha& operator=(const Fecha &f);

    int getDia() const
    {
        return this->dia;
    }
    const char* getMes() const
    {
        return this->mes;
    }
    int getAnio() const
    {
        return this->anio;
    }
    bool operator==(const Fecha &f)const;

protected:
    int buscarMes(char*mes)const;
};

#endif // FECHA_H
