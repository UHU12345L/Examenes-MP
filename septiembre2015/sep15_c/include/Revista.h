#ifndef REVISTA_H
#define REVISTA_H

#include "Volumen.h"

class Revista: public Volumen
{
    int *numeros;
    int n;
    int nmax;

    public:
        Revista(char* t, char* a, int is, int num);
        virtual ~Revista();
        void agregarNumero();
        void agregarNumero(int n);
        void ver() const;
        Revista(const Revista &r);
        Revista& operator=(const Revista &r);
};

#endif // REVISTA_H
