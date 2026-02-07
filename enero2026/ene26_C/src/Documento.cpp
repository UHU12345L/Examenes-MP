#include "Documento.h"

int Documento::contador = 1;

Documento::Documento(char *t)
{
    idDocumento = contador++;
    titulo = new char[strlen(t) + 1];
    strcpy(titulo, t);
}

Documento::Documento(const Documento &d)
{
    idDocumento = contador++;
    titulo = new char[strlen(d.titulo) + 1];
    strcpy(titulo, d.titulo);
}

Documento::~Documento()
{
    delete[] titulo;
}

Documento& Documento::operator=(const Documento &d)
{
    if(this != &d)
    {
        idDocumento = d.idDocumento;
        delete[] titulo;
        titulo = new char[strlen(d.titulo) + 1];
        strcpy(titulo, d.titulo);
    }
    return *this;
}

bool Documento::operator==(const Documento &d) const
{
    return (idDocumento == d.idDocumento && strcmp(titulo, d.titulo) == 0);
}

bool Documento::operator!=(const Documento &d) const
{
    return !(*this == d);
}

ostream& operator<<(ostream &s, const Documento &d)
{
    s << d.idDocumento << ": " << d.titulo;
    return s;
}
