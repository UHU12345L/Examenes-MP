#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H


class Departamento
{
    class Departamento
    {
    private:
        Profesor **lista;
        int nmax; //capacidad
        int n; //num elementos
        int busca(char *nombre) const; //devuelve la posición donde esta o -1 si no existe
    public:
        Departamento(); // constructor
        ~Departamento(); // destructor
        void agregar();
        void ver() const;
    };

#endif // DEPARTAMENTO_H
