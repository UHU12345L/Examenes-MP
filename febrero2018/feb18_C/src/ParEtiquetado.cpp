#include "ParEtiquetado.h"

ParEtiquetado::ParEtiquetado(const char *x, float f): Par(f)
{
    etiqueta=new char[strlen(x)+1];
    strcpy(etiqueta,x);
}
ParEtiquetado::ParEtiquetado(const ParEtiquetado &p):Par(p)
{
    etiqueta=new char[strlen(p.etiqueta)+1];
    strcpy(etiqueta,p.etiqueta);
}

const char* ParEtiquetado::cambiarEtiqueta(const char *z)
{
    delete[]etiqueta;
    etiqueta=new char[strlen(z)+1];
    strcpy(etiqueta,z);
    return etiqueta;
}
string ParEtiquetado:: texto()const
{
    stringstream s;
    s << etiqueta << "," << Par::texto();
    return s.str();
}

ostream& operator<<(ostream &s, const ParEtiquetado &p)
{
    s << p.getEtiqueta() << "," << (Par &)p;
    return s;
}
