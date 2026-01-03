#ifndef PARETIQUETADO_H
#define PARETIQUETADO_H
#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include "Par.h"
using namespace std;

class ParEtiquetado: public Par
{
    char *etiqueta;
public:
    ParEtiquetado(const char *x, float f);
    ParEtiquetado(const ParEtiquetado &p);
    ~ParEtiquetado()
    {
        delete [] etiqueta;
    }
    const char* getEtiqueta()const
    {
        return etiqueta;
    }
    const char* cambiarEtiqueta(const char *z);
    string texto()const;

};

ostream& operator<<(ostream &s, const ParEtiquetado &p);

#endif // PARETIQUETADO_H
