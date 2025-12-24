#ifndef CLIENTE_H
#define CLIENTE_H

#include "Fecha.h"
#include <cstring>

class Cliente
{
    char *nombre, *dni;
    Fecha fecha;

public:
    Cliente(const char *d, const char *nom, Fecha f);
    Cliente(const Cliente& c);
    virtual ~Cliente();

    Fecha getFecha() const
    {
        return fecha;
    }
    const char* getDni() const
    {
        return dni;
    }
    const char* getNombre() const
    {
        return nombre;
    }
};

#endif // CLIENTE_H
