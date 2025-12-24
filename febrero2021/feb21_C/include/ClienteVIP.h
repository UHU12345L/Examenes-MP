#ifndef CLIENTEVIP_H
#define CLIENTEVIP_H

#include "Cliente.h"

class ClienteVIP : public Cliente
{
public:
    ClienteVIP(const char *d, const char *nom, Fecha f);
    virtual ~ClienteVIP();
};

#endif // CLIENTEVIP_H
