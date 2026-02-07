#ifndef LIBRO_H
#define LIBRO_H
#include "Documento.h"
#include "Fecha.h"

class Libro : public Documento
{
    Fecha fechaEdicion;
    char *editorial;
    double precio1, precio2;

public:
    Libro(char *t, Fecha f, char *e, double p1, double p2);
    ~Libro();
    Libro& operator=(const Libro &l);
    bool operator!=(const Libro &li) const;
    static void subirPrecio(Libro &l, double p);
    static void informe(const Libro &l);
    friend ostream& operator<<(ostream &s, const Libro &li);
};

#endif // LIBRO_H
