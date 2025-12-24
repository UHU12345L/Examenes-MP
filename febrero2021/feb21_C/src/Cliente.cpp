#include "Cliente.h"

Cliente::Cliente(const char *d, const char *nom, Fecha f) : fecha(f)
{
    dni = new char[strlen(d) + 1];
    strcpy(dni, d);
    nombre = new char[strlen(nom) + 1];
    strcpy(nombre, nom);
}

Cliente::Cliente(const Cliente& c) : fecha(c.fecha)
{
    dni = new char[strlen(c.dni) + 1];
    strcpy(dni, c.dni);
    nombre = new char[strlen(c.nombre) + 1];
    strcpy(nombre, c.nombre);
}

Cliente::~Cliente() {
    delete[] dni;
    delete[] nombre;
}
