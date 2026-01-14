#include "ProfesorTC.h"
#include <iostream>
using namespace std;

int Profesor::n=1;

ProfesorTC::ProfesorTC(char *nom, int tri):Profesor(nom), codigo(n)
{
    trienios=tri;
    n++;
}

ProfesorTC::~ProfesorTC():Profesor(p), codigo(n),
{
    trienios=p.trienios;
    n++;
}

ProfesorTC &ProfesorTC ::operator=(const ProfesorTC &p){
if(this!=&p){
    Profesor::operator=(p);
    this->trienios=ptrienios;
}
return *this;
}
