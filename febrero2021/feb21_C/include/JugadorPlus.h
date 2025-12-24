#ifndef JUGADORPLUS_H
#define JUGADORPLUS_H

#include "Jugador.h"

template <class T>

class JugadorPlus: public Jugador<T>
{
    const int edad;
public:
    JugadorPlus(int d, Fecha f, T id, int e):Jugador<T>(d,f,id), edad(e) {}
    virtual ~JugadorPlus() {}
};

#endif // JUGADORPLUS_H
