#include "Par.h"

using namespace std;

int Par::n=1;

Par::Par(float v): clave (n)
{
    n++;
    valor=v;
}
Par::Par(const Par &p):clave(p.clave)
{
    valor=p.valor;
}
string Par:: texto()const
{
    stringstream s;
    s<<clave<<" ("<<valor<<") "<<endl;
    return s.str();
}
Par& Par::operator=(const Par&p)
{
    if (this!=&p)
    {
        valor=p.valor;
    }
    return *this;
}
ostream& operator<<(ostream &s, const Par &p)
{
    s<<p.getClave()<<"-"<<(float)p;
    return s;
}
