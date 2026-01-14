#include "Departamento.h"
#include "ProfesorTC.h"
#include <iostream>
#include <cstring>
using namespace std;

Departamento::Departamento()
{
    nmax = 10;
    n = 0;
    lista = new Profesor*[nmax];
}

Departamento::~Departamento()
{
    for(int i = 0; i < n; i++)
        delete lista[i];
    delete[] lista;
}

int Departamento::busca(char *nombre) const
{
    for(int i = 0; i < n; i++)
    {
        if(strcmp(lista[i]->getNombre(), nombre) == 0)
            return i;
    }
    return -1;
}

void Departamento::agregar()
{
    char nombre[30], resp;
    Profesor *p;

    cout << "Nombre: ";
    cin >> nombre;

    if(busca(nombre) == -1)
    {
        if(n == nmax)
        {
            Profesor **aux = lista;
            nmax *= 2;
            lista = new Profesor*[nmax];
            for(int i = 0; i < n; i++)
                lista[i] = aux[i];
            delete[] aux;
        }

        cout << "El profesor tiene contrato fijo (s/n)?: ";
        cin >> resp;

        if(resp == 's' || resp == 'S')
        {
            int tri;
            cout << "Trienios: ";
            cin >> tri;
            p = new ProfesorTC(nombre, tri);
        }
        else
        {
            p = new Profesor(nombre);
        }

        lista[n] = p;
        n++;
    }
    else
    {
        cout << nombre << " ya existe" << endl;
    }
}

void Departamento::ver() const
{
    for(int i = 0; i < n; i++)
    {
        lista[i]->ver();
        cout << endl;
    }
}
