package sep15_java;

public abstract class Volumen {
    private String titulo;
    private String autor;
    private int ISBN;
    
    // Constructor
    public Volumen(String titulo, String autor, int ISBN) {
        this.titulo = titulo;
        this.autor = autor;
        this.ISBN = ISBN;
    }
    
    // Getter para ISBN
    public int getISBN() {
        return ISBN;
    }
    
    // Método abstracto que deben implementar las clases derivadas
    public abstract void ver();
    
    // Método protegido para que las clases hijas lo usen
    protected void verDatos() {
        System.out.print(titulo + " (" + autor + ") " + ISBN);
    }
}