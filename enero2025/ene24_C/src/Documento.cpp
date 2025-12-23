#include "Documento.h"

int Documento::contador = 1; // ← Inicialización del static

Documento::Documento(char *t, char *a) {
    idDocumento = contador++;
    titulo = new char[strlen(t) + 1];
    strcpy(titulo, t);
    autor = new char[strlen(a) + 1];
    strcpy(autor, a);
}

Documento::Documento(const Documento& d) {
    idDocumento = contador++; // ← Nuevo ID
    titulo = new char[strlen(d.titulo) + 1];
    strcpy(titulo, d.titulo);
    autor = new char[strlen(d.autor) + 1];
    strcpy(autor, d.autor);
}

Documento::~Documento() {
    delete[] titulo;
    delete[] autor;
}

Documento& Documento::operator=(const Documento& d) {
    if (this != &d) {
        idDocumento = d.idDocumento; // ← Mismo ID en asignación
        delete[] titulo;
        delete[] autor;
        titulo = new char[strlen(d.titulo) + 1];
        strcpy(titulo, d.titulo);
        autor = new char[strlen(d.autor) + 1];
        strcpy(autor, d.autor);
    }
    return *this;
}

bool Documento::operator==(const Documento &d) const {
    return (idDocumento == d.idDocumento &&
            strcmp(titulo, d.titulo) == 0 &&
            strcmp(autor, d.autor) == 0);
}

ostream& operator<<(ostream &s, const Documento &d) {
    s << d.idDocumento << ": " << d.titulo << " (" << d.autor << ")";
    return s;
}
