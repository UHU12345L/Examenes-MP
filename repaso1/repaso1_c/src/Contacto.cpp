#include "Contacto.h"

Contacto::Contacto(char* nom, int num, char* mail): telefono(num)
{
    nombre=new char[strlen(nom)+1];
    strcpy(nombre, nom);

    email=new char[strlen(mail)+1];
    strcpy(email,mail);

}

Contacto::Contacto(const Contacto &c){
    nombre=new char[strlen(c.nombre)+1];
    strcpy(nombre, c.nombre);
    telefono=c.telefono;
    email=new char[strlen(c.email)+1];
    strcpy(email, c.email);

}

Contacto::~Contacto()
{
    delete[]nombre;
    delete[]email;
}

Contacto& Contacto::operator=(const Contacto &c){
    if(this!=c){
        delete[]nombre;
        delete[]email;
        nombre=new char[strlen(c.nombre)+1];
        strcpy(nombre,c.nombre);

        telefono=c.telefono;
        email=new char[strlen(c.email)+1];
        strcpy(email, c.email);
    }
    return *this;
}

ostream& operator<<(ostream &s, const Contacto &c){
    s << c.getNombre() << " (" << c.getTelefono() << ")-"<<c.getEmail();
    return s;
}

