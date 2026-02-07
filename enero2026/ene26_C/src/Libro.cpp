#include "Libro.h"

Libro::Libro(char *t, Fecha f, char *e, double p1, double p2): Documento(t), fechaEdicion(f.getDia(), f.getMes(), f.getAnio())
{
       editorial= new char[strlen(e)+1];
    strcpy(editorial, e);
    this->precio1= p1;
    this->precio2=p2;

}

Libro::~Libro()
{
    delete[]editorial;
}

Libro& Libro::operator=(const Libro &l){
    if(this !=&l){
        Documento::operator=(l);
    fechaEdicion=l.fechaEdicion;
        delete[] editorial;
        editorial= new char [strlen(l.editorial)+1];
        strcpy(editorial, l.editorial);
        this->precio1=l.precio1;
        this->precio2=l.precio2;
    }
    return *this;
}

bool Libro::operator !=(const Libro &li)const{
    if(Documento::operator!=(li)==true||fechaEdicion!=li.fechaEdicion||strcmp(li.editorial, this->editorial)!=0||li.precio1!=this->precio1 || li.precio2!=this->precio2){
        return true;
    }else{
        return false;
    }
}

void Libro:: subirPrecio(Libro &l, double p){
    l.precio1=l.precio1+p;
    if(l.precio2!=0){
        l.precio2=l.precio2+p;
    }
}

void Libro::informe(const Libro &l){
cout << l;  // llama a operator<< de Documento
    if(l.precio2 == 0)
    {
        cout << " ( precio unico )" << endl;
    }
    else
    {
        cout << " ( precio2: " << l.precio2 << " )" << endl;
    }
}

ostream &operator<<(ostream &s, const Libro &li){
    s<<(Documento&)li<<"-"<<li.fechaEdicion<<" Ed."<<li.editorial<<","<<li.precio1<<"€";
    return s;
}
