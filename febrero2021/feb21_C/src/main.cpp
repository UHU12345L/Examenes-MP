#include <iostream>
#include "Empresa.h"
#include "ClienteVIP.h"
#include "ClienteNOVIP.h"
using namespace std;

int main()
{
    try
    {
        Fecha f1(2, "ene", 2017);
        Fecha f2(15, "feb", 2020);

        Empresa ING;

        ING.altaCliente(new ClienteVIP("11111111A", "Juan", f1));
        ING.altaCliente(new ClienteNOVIP("22222222B", "Eva", f2));
        ING.altaCliente(new ClienteVIP("33333333C", "Pedro", f1));
        ING.altaCliente(new ClienteVIP("44444444D", "Ana", f2));

        cout << "Eliminando ClientesVIP con fecha 2/ene/2017..." << endl;
        Empresa::bajaClientesVIPFecha(ING, f1);

        cout << "Proceso completado" << endl;

    }
    catch (Error &e)
    {
        cout << "ERROR: " << e.what() << endl;
    }

    return 0;
}
