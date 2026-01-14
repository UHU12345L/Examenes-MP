#include "Numeros.h"

Numeros::Numeros(int capacidad, int ini, int incr)
{
    n=nmax=capacidad;
    array = new int[n];
    for(int i=0; i<n; i++)
        array[i] = ini+incr*i;
}
Numeros::Numeros(const Numeros &num)
{
    nmax=num.nmax;
    n=num.n;
    array=new int[nmax];
    for(int i=0; i<n; i++)
    {
        array[i] = num.array[i];
    }
}

Numeros::~Numeros()
{
    delete [] array;
}

void Numeros::ver()
{
    for(int i=0; i<n; i++)
        cout << array[i] << " ";
    cout << endl;
}

void Numeros::eliminarPrimero()
{
    for(int i=1; i<n; i++)
        array[i-1]=array[i];
    if (n>0) n--;
}

Numeros& Numeros::operator=(const Numeros &c)
{
    if (this != &c)
    {
        delete [] array;
        nmax=c.nmax;
        n=c.n;
        array = new int[nmax];
        for(int i=0; i<n; i++)
            array[i] = c.array[i];
    }
    return *this;
}

/*
Destructor virtual: herencia y polimorfismo, para que al ejecutarse
el destructor del hijo se ejecute el del hijo (clase derivada) y después
el del padre para que se libere toda la memoria adecuadamente

Un método estático solo puede acceder o modificar atributos estáticos
de la clase, no cualquiera. Puede invocarse sin crear objetos de la clase
*/
