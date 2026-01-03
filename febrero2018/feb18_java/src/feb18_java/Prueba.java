package feb18_java;

public class Prueba {
	public static void main(String[] args) { 
		  Persona p=new Persona("pepe", new Fecha(2, "feb",2000)); 
		  System.out.println(p.getNombre()+" nacio el "+p.getFecha()); 
		  //p.getFecha().setFecha(1,  "ene", 2001);
		  //p.setFecha(new Fecha(3, "mar", 2003));
		  System.out.println(p); 
		 } 
}
