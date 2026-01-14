#include "Libro.h"

Libro::Libro(char* titulo, char* autor, int ISBN, int nej, int npag)
    : Volumen(titulo, autor, ISBN)
{
    nejemplares = nej;
    npaginas = npag;
}

Libro::~Libro()
{
    // No hay memoria dinámica propia que liberar
    // El destructor de Volumen se llamará automáticamente
}

void Libro::ver() const
{
    verDatos();  // Llama al método protegido de Volumen
    cout << " " << nejemplares << " ej. (" << npaginas << " pag.)" << endl;
}

void Libro::agregarEjemplares(int n)
{
    nejemplares += n;
}
