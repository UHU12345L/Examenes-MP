#include "Libro.h"
double Libro::IVA = 0.21; //Inicialización del static

Libro::~Libro()
{
    delete[]editorial;
}

Libro::Libro(char *t, char *a, Fecha f, char *e, double p): Documento(t, a), fechaEdicion(f){
    editorial=new char[strlen(e)+1];
    strcpy(editorial,e);
    precio=p;
}

Libro::Libro(const Libro& li): Documento(li), fechaEdicion(li.fechaEdicion){
    editorial=new char[strlen(li.editorial)+1];
    strcpy(editorial,li.editorial);
    precio=li.precio;
}

Libro& Libro::operator=(const Libro& li){
    if(this != &li){
        //usar operadores = de Fecha y documento
        Documento::operator=(li);
        fechaEdicion=li.fechaEdicion;
        delete[]editorial;
        editorial=new char[strlen(li.editorial)+1];
        strcpy(editorial, li.editorial);
        precio=li.precio;
    }
    return *this;
}

 void Libro::setIVA(double i){
    if(i<=0.21 && i>=0){
        //this->IVA=i; METODOS STATIC NO PUEDEN USAR THIS
        IVA=i;
    }
}

 void Libro::informacion(const Libro & li){
    cout<< li <<endl;
    cout<<"precio sin IVA( "<<IVA*100 << "%): "<<li.precio/(1+IVA)<<endl;
}

bool Libro::operator==(const Libro &li) const{
    return (Documento::operator==(li) && fechaEdicion.getDia()==li.fechaEdicion.getDia()&& fechaEdicion.getMes()==li.fechaEdicion.getMes() && fechaEdicion.getAnio()==li.fechaEdicion.getAnio()
            && strcmp(editorial, li.editorial)==0 && precio==li.precio);
}

std::ostream& operator <<(std::ostream &os, const Libro &li){
   os<<(Documento &)li<<" - " <<li.fechaEdicion<<"Ed. "<<li.editorial<<", "<<li.precio<<"€";
   return os;
}
