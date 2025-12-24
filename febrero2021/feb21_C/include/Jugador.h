#ifndef JUGADOR_H
#define JUGADOR_H

#include "Fecha.h"
#include <cstring>

template <class T>
class Jugador
{
    const int dni;
    Fecha fecha;
    T id;
public:
    Jugador(int d, Fecha f, T id);
    virtual ~Jugador();
};


template <class T>
Jugador<T>::Jugador(int d, Fecha f, T id) : dni(d), fecha(f)
{
    this->id = id;
}

template <class T>
Jugador<T>::~Jugador() {}


template <>
Jugador<char*>::Jugador(int d, Fecha f, char* id);

template <>
Jugador<char*>::~Jugador();


#endif // JUGADOR_H
