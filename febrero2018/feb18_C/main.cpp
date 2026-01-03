#include <iostream>
#include "Par.h"
#include "ParEtiquetado.h"

using namespace std;

int main()
{
    Par a(4.5), b(5.0), c(a);
    const Par x=a.copia();
    float n=x;
    cout << "a:" << a << " b:" << b << " c:" << c << endl;
    a=4;
    b=1+x+b;
    Par y;
    cout << "a:" << a << " b:" << b << " c:" << c << endl;
    cout << "x:" << x.texto() <<  " y:" << y.texto() << endl;
    cout << "n:" << n << " clave de x: " << x.getClave() << endl;

    const ParEtiquetado pe1("xxx",3.9);
    ParEtiquetado pe2=pe1;
    Par *ppar=new ParEtiquetado("yyy", 4.7);
    cout << "pe1:" << pe1 << " pe2:" << pe2 << " ppar:" << *((ParEtiquetado *)ppar) << endl;
    cout << pe1.getEtiqueta() << endl;
    cout << pe2.cambiarEtiqueta("zzz") << endl;
    cout << "pe1:" << pe1.texto() <<  " pe2:" << pe2.texto() << " ppar:" << ppar->texto() << endl;
    delete ppar;
    system("PAUSE");
    return EXIT_SUCCESS;
}
