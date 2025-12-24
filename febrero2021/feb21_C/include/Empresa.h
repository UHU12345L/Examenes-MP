#ifndef EMPRESA_H
#define EMPRESA_H

#include"Cliente.h"
class Empresa
{
    Cliente **clientes;
    int ncli, nmaxcli;
public:
    Empresa();
    ~Empresa();
    void altaCliente(Cliente *c); //implementado
    void bajaCliente(const char *dni);
    static void bajaClientesVIPFecha(Empresa &e, Fecha f); //corregir errores del enunciado


};

#endif // EMPRESA_H
