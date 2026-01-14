#ifndef NUMEROS_H
#define NUMEROS_H
#include <iostream>
using namespace std;

class Numeros
{
    int *array;
    int n, nmax;
public:
    Numeros(int capacidad, int ini, int incr);
    Numeros(const Numeros &num);
    ~Numeros();
    void ver();
    void eliminarPrimero();
    int getN()
    {
        return n;
    }
    Numeros& operator=(const Numeros &c);
};

#endif // NUMEROS_H
