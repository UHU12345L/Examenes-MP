#ifndef ERROR_H
#define ERROR_H

#include <cstring>
#include <exception>
using namespace std;

class Error: public exception
{
    char *mensaje;
public:
    Error(const char *m): exception()
    {
        mensaje = new char[strlen(m) + 1];
        strcpy(mensaje, m);
    }

    ~Error()
    {
        delete[] mensaje;
    }

    const char *what() const throw()
    {
        return mensaje;
    }
};

#endif // ERROR_H
