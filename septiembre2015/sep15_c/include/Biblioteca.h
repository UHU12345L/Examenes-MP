#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "Volumen.h"
#include "Libro.h"
#include "Revista.h"

class Biblioteca
{
    Volumen **deposito;
    int n;
    int nmax;
    public:
        Biblioteca();
    virtual ~Biblioteca();
    Biblioteca(const Biblioteca &b);
    Biblioteca& operator=(const Biblioteca &b);

    bool alta(Volumen *v);
    int buscar(int ISBN);
    void listar();
    void listarLibros();
    void listarRevistas();
    Volumen *getVolumen(int n);
    void agregarNumero();

};

#endif // BIBLIOTECA_H
//todas las clases con atributos dinamicos punteros deben implementar el constructor de copia y operator=
