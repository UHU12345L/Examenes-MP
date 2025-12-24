#include "Empresa.h"
#include "ClienteVIP.h"
#include <typeinfo>
Empresa::Empresa()
{
    ncli=0;
    nmaxcli=10;
    clientes=new Cliente*[nmaxcli];
}

Empresa::~Empresa()
{
    for(int i = 0; i < ncli; i++)
    {
        delete clientes[i];
    }
    delete[] clientes;
}

void Empresa::altaCliente(Cliente *c)
{
    if (ncli == nmaxcli)
    {
        // Redimensionar si es necesario
        nmaxcli *= 2;
        Cliente **nuevo = new Cliente*[nmaxcli];
        for(int i = 0; i < ncli; i++)
        {
            nuevo[i] = clientes[i];
        }
        delete[] clientes;
        clientes = nuevo;
    }
    clientes[ncli] = c;
    ncli++;
}



void Empresa::bajaCliente(const char *dni)
{
    for(int i=0; i<this->ncli; i++)
    {
        if(strcmp(this->clientes[i]->getDni(), dni)==0)
        {
            delete this->clientes[i];
            for(int j=i+1; j<this->ncli; j++)
            {
                this->clientes[j-1]=this->clientes[j];
            }
            this->ncli--;
            break;
        }
    }
}

void Empresa::bajaClientesVIPFecha(Empresa &e, Fecha f)
{
    /*errores que habian:
          asumir que hay 100 clientes
          no se usaba getFecha ni getDni
          no se comprobaba que el cliente fuera VIP
          no se liberaba memoria
          no se corrian todos a la izquierda
          no se reducia el numero de clientes al eliminar
          */
    for(int i=0; i<e.ncli; i++)
    {
        if (e.clientes[i]->getFecha()==f && typeid(*e.clientes[i])==typeid(ClienteVIP))
        {
            e.bajaCliente(e.clientes[i]->getDni()); //al eliminar se corren los siguientes hacia atras
            i--;
        }
    }
}
