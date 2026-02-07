#include "Fecha.h"

Fecha::Fecha(int d, const char* m, int a):anio(a)
{
    //comprobar dia correcto
    int total=30;
    if(strcmp(m, "febrero")==0)
    {
        total=28;
    }
    if(d<1)
    {
        d=1;
    }
    else if(d>total)
    {
        d=total;
    }
    dia=d;
    mes=new char[strlen(m)+1];
    strcpy(mes,m);
}

Fecha::~Fecha()
{
    delete[]mes;
}

const char* Fecha:: getMes()const
{
    return this->mes;
}

Fecha::operator int ()const
{
    int total=30;
    if(strcmp(this->mes, "febrero")==0)
    {
        total=28;
    }
    return total-this->dia;
}

bool Fecha:: operator != (const Fecha &f) const
{
    return (this->dia!=f.dia || strcmp(this->mes, f.mes)!=0||this->anio!=f.anio);
}

Fecha& Fecha:: operator= (const Fecha &f)
{
    if(this !=&f)
    {
        this->dia=f.dia;
        delete[]this->mes;
        this->mes=new char[strlen(f.mes)+1];
        strcpy(this->mes, f.mes);
        this->anio=f.anio;
    }
    return *this;
}
ostream& operator << (ostream &s, const Fecha&f)
{
    s<<f.dia<<"/"<<f.mes<<"/"<<f.anio;
    return s;
}
