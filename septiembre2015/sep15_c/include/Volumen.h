#ifndef VOLUMEN_H
#define VOLUMEN_H

#include <iostream>
#include <cstring>
using namespace std;

class Volumen
{
    char *titulo;
    char *autor;
    int is;  // ISBN

    public:
        Volumen(char* t, char* a, int is);
        virtual ~Volumen();
        Volumen(const Volumen &v);
Volumen& operator=(const Volumen &v);
virtual void ver() const = 0;
int getISBN() { return is; }

    protected:
        void verDatos() const;
};

#endif // VOLUMEN_H
