package ene24_java;

public class Principal {
    public static void main(String[] args) {
        final Fecha f1 = new Fecha(29, 12, 2024), f2 = new Fecha(30, 10, 2001);
        Fecha f3 = new Fecha(1, 1, 2000);
        f3.setFecha(15, 11, 2000);
        
        System.out.println(f1.getDia() + "-" + f1.getMes() + "-" + f1.getAnio());
        System.out.println(f1 + ", " + f2 + ", " + f3);
        
        Documento d1 = new Documento("La Odisea", "Homero"), d2 = new Documento(d1);
        System.out.println(d1 + "\n" + d2);
        
        if (d1.equals(d2))
            System.out.println("d1 y d2 son exactamente iguales");
        else
            System.out.println("d1 y d2 no son exactamente iguales");
        
        d2 = (Documento) d1.clone();
        System.out.println(d1 + "\n" + d2);
        
        if (d1.equals(d2))
            System.out.println("d1 y d2 son exactamente iguales");
        
        System.out.println("--LIBROS--");
        Libro.setIVA(0.27); // el IVA debe ser como maximo del 21%
        
        Libro i1 = new Libro("Genesis", "Pedro Salinas", f1, "Planeta", 10.00);
        Libro i2 = new Libro("Perdidos", "Juan Rulfo", f2, "Alfaguara", 12.75);
        Libro i3 = new Libro(i2);
        
        System.out.println(i1 + "\n" + i2 + "\n" + i3);
        
        if (i1.equals(i2))
            System.out.println("i2 y i3 son exactamente iguales");
        else
            System.out.println("i2 y i3 no son exactamente iguales");
        
        Libro.informacion(i1);
        System.out.println("------");
        
        i2 = (Libro) i1.clone();
        System.out.println(i1 + "\n" + i2 + "\n" + i3);
        
        System.out.println("------");
        Libro.setIVA(0.10); // el IVA debe ser como maximo del 21%
        Libro.informacion(i3);
        
        if (i1.equals(i2))
            System.out.println("i1 y i2 son exactamente iguales");
    }
}
