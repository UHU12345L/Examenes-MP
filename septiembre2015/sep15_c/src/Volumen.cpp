#include "Volumen.h"

Volumen::Volumen(char* t, char* a, int isbn)
{
    titulo = new char[strlen(t) + 1];
    strcpy(titulo, t);
    autor = new char[strlen(a) + 1];
    strcpy(autor, a);
    is = isbn;
}

Volumen::~Volumen()
{
    delete[] titulo;
    delete[] autor;
}

Volumen::Volumen(const Volumen &v)
{
    titulo = new char[strlen(v.titulo) + 1];
    strcpy(titulo, v.titulo);
    autor = new char[strlen(v.autor) + 1];
    strcpy(autor, v.autor);
    is = v.is;
}

Volumen& Volumen::operator=(const Volumen &v)
{
    if (this != &v)
    {
        delete[] titulo;
        delete[] autor;

        titulo = new char[strlen(v.titulo) + 1];
        strcpy(titulo, v.titulo);
        autor = new char[strlen(v.autor) + 1];
        strcpy(autor, v.autor);
        is = v.is;
    }
    return *this;
}

void Volumen::verDatos() const
{
    cout << titulo << " (" << autor << ") " << is;
}
