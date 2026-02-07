#include "ContactoPremium.h"
#include <cstring>

double ContactoPremium::descuento = 0.0;
int ContactoPremium::contador = 1;

ContactoPremium::ContactoPremium(char* nom, int num, char* mail, char *em): Contacto(nom, num, mail)
{
    empresa=new char[strlen(em)+1];
    strcpy(empresa,em);
    numeroCliente = contador;
    contador++;
}

ContactoPremium::ContactoPremium(ContactoPremium &cp): Contacto(cp){
    empresa=new char[strlen(cp.empresa)+1];
    strcpy(empresa,cp.empresa);

    numeroCliente=cp.numeroCliente;
}
ContactoPremium::~ContactoPremium()
{
    delete[]empresa;
}

ContactoPremium& CotactoPremium::operator=(const ContactoPremium &cp){
    if(this!=&cp){
        Contacto::operator=(cp);
        delete[]empresa;
        empresa=new char[strlen(cp.empresa)+1];
        strcpy(empresa, cp.empresa);
        numeroCliente=cp.numeroCliente;
    }
    return *this;
}

bool ContactoPremium::operator==(ContactoPremium &cp1){
    if(this->numeroCliente==cp1.numeroCliente&&
       strcmp(this->empresa, cp1.empresa)==0){
        return true;
       }else{
           return false;
       }
}

static void ContactoPremium::mostrarInfo(ContactoPremium &cp1){
    cout<<"Cliente # "<<cp1.getNumeroCliente()<<": "<<cp1.getNombre()<< " de "<<cp1.getEmpresa()<<endl;
    cout<<"Descuento actual: "<<(int)(descuento * 100) << "%"<<endl;
}

ostream& operator<<(ostream &s, const ContactoPremium &cp) {
    s << "[" << cp.getNumeroCliente() << "] ";
    s << (const Contacto&)cp;  // ← Reutiliza operator<< del padre
    s << " | " << cp.getEmpresa();
    return s;
}

