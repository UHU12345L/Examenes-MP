#ifndef PROFESOR_H
#define PROFESOR_H

#include <iostream>
#include <cstring>
using namespace std;

class Profesor
{
    char *nombre;
    static float sueldo_base;
public:
    Profesor(char *n);
    Profesor(const Profesor &p);
    virtual ~Profesor();
    const char *getNombre() const
    {
        return nombre;
    }
    virtual float nomina() const
    {
        return sueldo_base;
    }
    static float getSueldoBase()
    {
        return sueldo_base;
    }
    static void setSueldoBase(float su)
    {
        sueldo_base = su;
    }
    virtual void ver() const
    {
        cout << nombre << ", sueldo base: " << sueldo_base;
    }
    void setNombre(const char* nom);

    Profesor &operator=(const Profesor &p);
};

#endif // PROFESOR_H
