#ifndef CONTACTOPREMIUM_H
#define CONTACTOPREMIUM_H

#include "Contacto.h"

class ContactoPremium:public Contacto
{
    static double descuento;
    char *empresa;
    int numeroCliente;
    static int contador;

    public:
        ContactoPremium(char* nom, int num, char* mail, char *em);
        ContactoPremium(ContactoPremium &cp);
        virtual ~ContactoPremium();

        ContactoPremium& operator=(const ContactoPremium &cp);
        static void setDescuento(double d){descuento=d;}
        bool operator==(ContactoPremium &cp1)const;
        static void mostrarInfo(const ContactoPremium &cp1);
        int getNumeroCliente() const { return numeroCliente; }
        const char* getEmpresa() const { return empresa; }
};
        ostream& operator<<(ostream &s, const ContactoPremium &cp);


#endif // CONTACTOPREMIUM_H
