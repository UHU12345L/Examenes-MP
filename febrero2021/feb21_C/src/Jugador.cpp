#include "Jugador.h"

// Especialización para char*
template <>
Jugador<char*>::Jugador(int d, Fecha f, char* id) : dni(d), fecha(f)
{
    this->id = new char[strlen(id) + 1];
    strcpy(this->id, id);
}

template <>
Jugador<char*>::~Jugador()
{
    delete[] id;
}
