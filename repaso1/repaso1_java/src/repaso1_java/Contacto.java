package repaso1_java;

public class Contacto implements Cloneable {
    private String nombre;
    private int telefono;
    private String email;
    
    public Contacto(String nom, int tel, String mail) {
        nombre = nom;
        telefono = tel;
        email = mail;
    }
    
    public Contacto(Contacto c) {
        nombre = c.nombre;
        telefono = c.telefono;
        email = c.email;
    }
    
    public String getNombre() { return nombre; }
    public int getTelefono() { return telefono; }
    public String getEmail() { return email; }
    
    public Object clone() {
        return new Contacto(this);
    }
    
    public boolean equals(Object o) {
        if (this.getClass() != o.getClass()) return false;
        Contacto c = (Contacto) o;
        return nombre.equals(c.nombre) && telefono == c.telefono && 
               email.equals(c.email);
    }
    
    public String toString() {
        return nombre + " (" + telefono + ") - " + email;
    }
}
