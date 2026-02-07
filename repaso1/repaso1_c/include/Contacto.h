#ifndef CONTACTO_H
#define CONTACTO_H


class Contacto
{
    int telefono;
    char *nombre;
    char *email;
    public:
        Contacto(const char* nom, int num, const char* mail);
        Contacto(const Contacto &c);
        virtual ~Contacto();

        Contacto& operatos=(const Contacto &c);
        const char* getNombre() const{return nombre;}
        const char* getEmail() const {return email;}
        const char* getTelefono const {return telefono;}
};
ostream& operator<<(ostream &s, const Contacto &c);


#endif // CONTACTO_H
