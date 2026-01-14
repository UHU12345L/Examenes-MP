#include "Biblioteca.h"

Biblioteca::Biblioteca()
{
    nmax = 100;  // Capacidad inicial
    n = 0;
    deposito = new Volumen*[nmax];
}

Biblioteca::~Biblioteca()
{
    for(int i = 0; i < n; i++)
        delete deposito[i];
    delete[] deposito;
}

Biblioteca::Biblioteca(const Biblioteca &b)
{
    nmax = b.nmax;
    n = b.n;
    deposito = new Volumen*[nmax];

    for(int i = 0; i < n; i++)
    {
        // Determinar el tipo real del objeto y crear una copia
        Libro *lib = dynamic_cast<Libro*>(b.deposito[i]);
        if (lib)
            deposito[i] = new Libro(*lib);
        else
        {
            Revista *rev = dynamic_cast<Revista*>(b.deposito[i]);
            if (rev)
                deposito[i] = new Revista(*rev);
        }
    }
}

Biblioteca& Biblioteca::operator=(const Biblioteca &b)
{
    if (this != &b)
    {
        // Liberar memoria actual
        for(int i = 0; i < n; i++)
            delete deposito[i];
        delete[] deposito;

        // Copiar del otro objeto
        nmax = b.nmax;
        n = b.n;
        deposito = new Volumen*[nmax];

        for(int i = 0; i < n; i++)
        {
            Libro *lib = dynamic_cast<Libro*>(b.deposito[i]);
            if (lib)
                deposito[i] = new Libro(*lib);
            else
            {
                Revista *rev = dynamic_cast<Revista*>(b.deposito[i]);
                if (rev)
                    deposito[i] = new Revista(*rev);
            }
        }
    }
    return *this;
}

bool Biblioteca::alta(Volumen *v)
{
    // Comprobar si ya existe un volumen con ese ISBN
    if (buscar(v->getISBN()) != -1)
    {
        cout << "Error: Ya existe un volumen con ese ISBN" << endl;
        return false;
    }

    // Si el array está lleno, ampliarlo
    if (n == nmax)
    {
        Volumen **aux = deposito;
        nmax *= 2;
        deposito = new Volumen*[nmax];
        for(int i = 0; i < n; i++)
            deposito[i] = aux[i];
        delete[] aux;
    }

    deposito[n] = v;
    n++;
    return true;
}

int Biblioteca::buscar(int ISBN)
{
    for(int i = 0; i < n; i++)
    {
        if (deposito[i]->getISBN() == ISBN)
            return i;
    }
    return -1;
}

void Biblioteca::listar()
{
    for(int i = 0; i < n; i++)
    {
        cout << (i + 1) << " ";
        deposito[i]->ver();
    }
}

void Biblioteca::listarLibros()
{
    int contador = 0;
    for(int i = 0; i < n; i++)
    {
        Libro *lib = dynamic_cast<Libro*>(deposito[i]);
        if (lib)
        {
            contador++;
            cout << contador << " ";
            lib->ver();
        }
    }
}

void Biblioteca::listarRevistas()
{
    int contador = 0;
    for(int i = 0; i < n; i++)
    {
        Revista *rev = dynamic_cast<Revista*>(deposito[i]);
        if (rev)
        {
            contador++;
            cout << contador << " ";
            rev->ver();
        }
    }
}

Volumen *Biblioteca::getVolumen(int pos)
{
    if (pos >= 0 && pos < n)
        return deposito[pos];
    return nullptr;
}

void Biblioteca::agregarNumero()
{
    // Agrega el último número a todas las revistas
    for(int i = 0; i < n; i++)
    {
        Revista *rev = dynamic_cast<Revista*>(deposito[i]);
        if (rev)
            rev->agregarNumero();
    }
}
