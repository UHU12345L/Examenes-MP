#ifndef PAR_H
#define PAR_H

#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdlib>
using namespace std;
class Par
{
    static int n;
    const int clave;
    float valor;
public:
    Par(float v=0);
    Par(const Par &p);
    Par copia()const
    {
        return Par(valor);
    }
    virtual string texto()const;
    int getClave()const
    {
        return clave;
    }
    operator float() const
    {
        return valor;
    }
    Par& operator=(const Par&p);
};
ostream& operator<<(ostream &s, const Par &p);


#endif // PAR_H
