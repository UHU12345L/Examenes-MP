package ene24_java;

public class Documento implements Cloneable {
    private static int contador = 1;
    private int idDocumento;
    private String titulo;
    private String autor;
    
    // Constructor principal
    public Documento(String t, String a) {
        idDocumento = contador;
        contador++;
        titulo = t;
        autor = a;
    }
    
    // Constructor de copia (para new Documento(d1))
    public Documento(Documento d) {
        idDocumento = contador;  // Nuevo ID
        contador++;
        titulo = d.titulo;
        autor = d.autor;
    }
    
    // Constructor protegido para clone (mismo ID)
    protected Documento(Documento d, int notUsed) {
        idDocumento = d.idDocumento;  // Mismo ID
        titulo = d.titulo;
        autor = d.autor;
    }
    
    @Override
    public Object clone() {
        return new Documento(this, 1);
    }
    
    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        
        Documento d = (Documento) o;
        return idDocumento == d.idDocumento && 
               titulo.equals(d.titulo) && 
               autor.equals(d.autor);
    }
    
    @Override
    public String toString() {
        return idDocumento + ": " + titulo + " (" + autor + ")";
    }
}