package feb18_java;

 //APARTADO 1, 2 Y 5
 public class Fecha {
	private int dia, anio; 
	 private String mes; 
	 public Fecha(int d, String m, int a) { dia=d; mes=m; anio=a; } 
	 
	 public int getDia() { return dia; } 
	 public String getMes() { return mes; } 
	 public int getAnio() { return anio; } 
	 
	 public void setFecha(int d, String m, int a) { dia=d; mes=m; anio=a; } 
	 public String toString() { return dia+"/"+mes+"/"+anio; } 
}

/*
 * APARTADO 3
 *
public class Fecha { 
	 final private int dia, anio; 
	 final private String mes; 
	 
	 public Fecha(int d, String m, int a) { dia=d; mes=m; anio=a; } 
	 public int getDia() { return dia; } 
	 public String getMes() { return mes; } 
	 public int getAnio() { return anio; } 
	 
	 public String toString() { return dia+"/"+mes+"/"+anio; } 
	} 
*/
//inmutable, no puede tener set
