package feb18_java;

/*
 * APARTADO 1 Y 2
public class Persona {
	private String nombre; 
	private final Fecha fecha; 
	
	public Persona(String nom, Fecha f) { nombre=nom; fecha=f; } 
	  
	public String getNombre() { return nombre; } 
	public Fecha getFecha() { return fecha; } 
	public String toString() { return nombre+" "+fecha; } 
}
*/

/*
 * APARTADO 3
 	public class Persona {
	private String nombre; 
	private Fecha fecha; 
	
	public Persona(String nom, Fecha f) { nombre=nom; fecha=f; } 
	  
	public String getNombre() { return nombre; } 
	public Fecha getFecha() { return fecha; } 
	public String toString() { return nombre+" "+fecha; } 
	
	public void setFecha(Fecha f) { 
		fecha = new Fecha(f.getDia(), f.getMes(), f.getAnio()); 
	}
}
 
 */

//APARTADO 5

	public class Persona {
		private int n;  // Contador de cambios de fecha
		private String nombre; 
		private Fecha fecha; 
		
		public Persona(String nom, Fecha f) { 
			n = 0;  
			nombre = nom; 
			fecha = f; 
		} 
		  
		public String getNombre() { return nombre; } 
		
		public Fecha getFecha() { 
			return new Fecha(fecha.getDia(), fecha.getMes(), fecha.getAnio()); 
		} 
		
		public String toString() { return nombre + " " + fecha; } 
		
		public void setFecha(int d, String m, int a) { 
			if (d != fecha.getDia() || !m.equals(fecha.getMes()) || a != fecha.getAnio()) {
				if (n < 2) { 
					fecha.setFecha(d, m, a);  
					n++; 
				} 
			}
		}
	}
