#ifndef CLIENTENOVIP_H
#define CLIENTENOVIP_H

#include "Cliente.h"

class ClienteNOVIP : public Cliente
{
public:
    ClienteNOVIP(const char *d, const char *nom, Fecha f);
    virtual ~ClienteNOVIP();
};

#endif // CLIENTENOVIP_H
