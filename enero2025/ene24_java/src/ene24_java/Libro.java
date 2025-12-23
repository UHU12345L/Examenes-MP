package ene24_java;

public class Libro extends Documento {
    private static double IVA = 0.21;
    private Fecha fechaEdicion;
    private String editorial;
    private double precio;
    
    public Libro(String t, String a, Fecha f, String e, double p) {
        super(t, a);
        // Fecha es MUTABLE, crear copia
        fechaEdicion = new Fecha(f.getDia(), f.getMes(), f.getAnio());
        editorial = e;  // String es INMUTABLE
        precio = p;
    }
    
    // Constructor de copia (para new Libro(i2))
    public Libro(Libro li) {
        super(li);  // Llama al constructor de copia de Documento
        // Fecha es MUTABLE, crear copia
        fechaEdicion = new Fecha(li.fechaEdicion.getDia(), 
                                 li.fechaEdicion.getMes(), 
                                 li.fechaEdicion.getAnio());
        editorial = li.editorial;  // String es INMUTABLE
        precio = li.precio;
    }
    
    // Constructor protegido para clone (mismo ID)
    protected Libro(Libro li, int notUsed) {
        super(li, notUsed);  // Llama al constructor protegido de Documento
        fechaEdicion = new Fecha(li.fechaEdicion.getDia(), 
                                 li.fechaEdicion.getMes(), 
                                 li.fechaEdicion.getAnio());
        editorial = li.editorial;
        precio = li.precio;
    }
    
    @Override
    public Object clone() {
        return new Libro(this, 1);
    }
    
    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        
        Libro li = (Libro) o;
        
        boolean mismaFecha = (fechaEdicion.getDia() == li.fechaEdicion.getDia() &&
                              fechaEdicion.getMes() == li.fechaEdicion.getMes() &&
                              fechaEdicion.getAnio() == li.fechaEdicion.getAnio());
        
        return super.equals(li) && 
               mismaFecha && 
               editorial.equals(li.editorial) && 
               precio == li.precio;
    }
    
    public static void setIVA(double i) {
        if (i >= 0 && i <= 0.21) {
            IVA = i;
        }
    }
    
    public static void informacion(Libro li) {
        System.out.println(li);
        System.out.println("precio sin IVA(" + (IVA * 100) + "%): " + 
                          (li.precio / (1 + IVA)));
    }
    
    @Override
    public String toString() {
        return super.toString() + " - " + fechaEdicion + 
               " Ed. " + editorial + ", " + precio + "€";
    }
}
