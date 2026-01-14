#include "Revista.h"

Revista::Revista(char* titulo, char* autor, int ISBN, int numero)
    : Volumen(titulo, autor, ISBN)
{
    nmax = 12;  // Capacidad inicial de 12
    n = 1;
    numeros = new int[nmax];
    numeros[0] = numero;
}

Revista::~Revista()
{
    delete[] numeros;
}

Revista::Revista(const Revista &r) : Volumen(r)
{
    nmax = r.nmax;
    n = r.n;
    numeros = new int[nmax];
    for(int i = 0; i < n; i++)
        numeros[i] = r.numeros[i];
}

Revista& Revista::operator=(const Revista &r)
{
    if (this != &r)
    {
        Volumen::operator=(r);  // Llama al operator= del padre

        delete[] numeros;
        nmax = r.nmax;
        n = r.n;
        numeros = new int[nmax];
        for(int i = 0; i < n; i++)
            numeros[i] = r.numeros[i];
    }
    return *this;
}

void Revista::ver() const
{
    verDatos();  // Llama al método protegido de Volumen
    cout << " (" << n << " numeros: ";
    for(int i = 0; i < n - 1; i++)
        cout << numeros[i] << ",";
    if (n > 0)
        cout << numeros[n - 1];
    cout << ")" << endl;
}

void Revista::agregarNumero(int num)
{
    if (n == nmax)  // Si está lleno, ampliar
    {
        int *aux = numeros;
        nmax += 12;  // Aumentar capacidad en 12
        numeros = new int[nmax];
        for(int i = 0; i < n; i++)
            numeros[i] = aux[i];
        delete[] aux;
    }
    numeros[n] = num;
    n++;
}

void Revista::agregarNumero()
{
    // Agrega el siguiente número al último
    if (n > 0)
        agregarNumero(numeros[n - 1] + 1);
}
