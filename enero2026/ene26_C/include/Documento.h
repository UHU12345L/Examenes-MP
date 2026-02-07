#ifndef DOCUMENTO_H
#define DOCUMENTO_H
#include <iostream>
#include <cstring>

using namespace std;

class Documento
{
    static int contador;
    int idDocumento;
    char *titulo;

public:
    Documento(char *t);
    Documento(const Documento &d);
    ~Documento();
    Documento& operator=(const Documento &d);
    bool operator==(const Documento &d) const;
    bool operator!=(const Documento &d) const;
    friend ostream& operator<<(ostream &s, const Documento &d);
};

#endif // DOCUMENTO_H
