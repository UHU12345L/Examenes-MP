#include "Fecha.h"
#include"cstring"

int Fecha::diasValidos[]= {31,28,31,30,31,30,31,31,30,31,30,31};
const char *Fecha::mesesValidos[]= {"ene", "feb", "mar", "abr", "may", "jun", "jul", "ago",
                                    "sep", "oct", "nov", "dic"
                                   };


int Fecha:: buscarMes(char*mes)const
{
    for(int i=0; i<12; i++)
    {
        if(strcmp(mes, mesesValidos[i])==0)
        {
            return i;
        }
    }
    return -1;
}

Fecha::Fecha(int d, char* m, int a) throw (Error)
{
    int bm=buscarMes(m);
    if(bm==-1)
        throw Error("Mes no valido");
    if(d<1||d>diasValidos[bm]) throw Error("Dia no válido");

    mes=new char[strlen(m)+1];
    strcpy(mes,m);
    dia=d;
    anio=a;

}

Fecha::~Fecha()
{
    delete[]mes;
}

// Constructor de copia
Fecha::Fecha(const Fecha &f)
{
    this->dia = f.dia;
    this->anio = f.anio;
    this->mes = new char[strlen(f.mes) + 1];
    strcpy(mes, f.mes);
}

Fecha& Fecha::operator=(const Fecha &f)
{
    if (this != &f)
    {
        dia = f.dia;
        anio = f.anio;
        delete[] mes;
        mes = new char[strlen(f.mes) + 1];
        strcpy(mes, f.mes);
    }
    return *this;
}

bool Fecha::operator==(const Fecha &f) const
{
    return (dia == f.dia &&strcmp(mes, f.mes) == 0 && anio == f.anio);
}
