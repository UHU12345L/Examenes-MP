#ifndef LIBRO_H
#define LIBRO_H

#include "Volumen.h"


class Libro: public Volumen
{
    int nejemplares;
    int npaginas;

    public:
        Libro(char* t, char* a, int is, int nej, int npag);
        virtual ~Libro();
        void ver() const;
        void agregarEjemplares(int n);
};

#endif // LIBRO_H
