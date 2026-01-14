#ifndef PROFESORTC_H
#define PROFESORTC_H
#include "Profesor.h"
#include <iostream>
using namespace std;

class ProfesorTC:public Profesor
{
    static int n;
    int trienios;
    const int codigo;
    public:
        ProfesorTC(char *nom, int tri);
        ProfesorTC(const ProfesorTC &p);
        int getCodigo(){return codigo;}
        int getTrienios(){return trienios;}
        void setTrienios(int tri){trienios=tri;}
        float nomina()const{Proofesor::nomina() + trienios*40;}
        void ver()const{
            Profesor::ver();
            cout<<"Trienios: " trienios<<", codigo: "<<codigo<<", nomima: "<<nomina<<endl;
        }
        ProfesotTC &operator=(const ProfesorTC &p);

};

#endif // PROFESORTC_H
