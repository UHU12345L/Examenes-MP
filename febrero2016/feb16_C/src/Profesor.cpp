#include "Profesor.h"
#include <cstring>
#include <iostream>
using namespace std;

float Profesor::sueldo_base=-1;

Profesor::Profesor(char *n)
{
    nombre=new char[strlen(n)+1];
    strcpy(nombre, n);
    if(this->sueldo_base==-1)
    {
        cout<<"introduce sueldo base: "<<endl;
        cin>>sueldo_base;
    }
}

Profesor::Profesor(const Profesor &p)
{
    nombre=new char[strlen(p.nombre)+1];
    strcpy(nombre, p.nombre);
}

Profesor::~Profesor()
{
    delete[]nombre;
}

Profesor::void setNombre(const char* nom){
    delete[]nombre;
    nombre=new char[strlen(nom)+1];
    strcpy(nombre,nom);
}

    Profesor &Profesor::operator=(const Profesor &p){
        if(this!=&p){
            this.setNombre(p.getNombre());
        }
        return *this;
    }
