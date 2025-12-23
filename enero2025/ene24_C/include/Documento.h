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
    char *autor;
public:
    Documento (char *t, char *a);
    Documento(const Documento& d);
    ~Documento(); // ← FALTABA destructor
    Documento& operator=(const Documento& d);
    bool operator==(const Documento &d) const;
    friend ostream& operator<<(ostream &s, const Documento &d);
};
#endif // DOCUMENTO_H
