#ifndef LIBRO_H
#define LIBRO_H
#include "Documento.h"
#include "Fecha.h"
#include <iostream>
#include <cstring>
using namespace std;

class Libro: public Documento
{
    static double IVA;
    Fecha fechaEdicion;
    char *editorial;
    double precio;
public:
    Libro(char *t, char *a, Fecha f, char *e, double p);
    ~Libro();
    Libro(const Libro& li);
    Libro& operator=(const Libro& li);
    static void setIVA(double i);
    static void informacion(const Libro & li);
    bool operator==(const Libro &li) const;
    friend ostream& operator<<(ostream &os, const Libro &li);
};
#endif // LIBRO_H
