#include <iostream>
#include "Documento.h"
#include "Fecha.h"
#include "Libro.h"

using namespace std;

int main()
{
    const Fecha f1(29,12,2024), f2(30,10,2001); //Fecha f4; //no permitido
  Fecha f3(1,1,2000); f3.setFecha(15,11,2000);
  cout << f1.getDia() << "-" << f1.getMes() << "-" << f1.getAnio() << endl;
  cout << f1 << ", " << f2 << ", " << f3 << endl;
  Documento d1("La Odisea", "Homero"), d2(d1);
  cout << d1 << endl << d2 << endl;
  if (d1==d2) cout << "d1 y d2 son exactamente iguales" << endl;
  else cout << "d1 y d2 no son exactamente iguales" << endl;
  d2=d1;
  cout << d1 << endl << d2 << endl;
  if (d1==d2)
    cout << "d1 y d2 son exactamente iguales" << endl;
  cout << "--LIBROS--" << endl;
  Libro::setIVA(0.27); //el IVA debe ser como maximo del 21%
  Libro i1("Genesis", "Pedro Salinas", f1, "Planeta", 10.00);
  Libro i2("Perdidos", "Juan Rulfo", f2, "Alfaguara", 12.75);
  Libro i3(i2);
  cout << i1 << endl << i2 << endl << i3 << endl;
  if (i1==i2) cout << "i2 y i3 son exactamente iguales" << endl;
  else cout << "i2 y i3 no son exactamente iguales" << endl;
  Libro::informacion(i1);
  cout << "------" << endl;
  i2=i1;
  cout << i1 << endl << i2 << endl << i3 << endl;
  cout << "------" << endl;
  Libro::setIVA(0.10); //el IVA debe ser como maximo del 21%
  Libro::informacion(i3);
  if (i1==i2)
    cout << "i1 y i2 son exactamente iguales" << endl;
  return 0;
}
