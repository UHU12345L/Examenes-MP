package feb21_java;

public class HiloEjecucion {
	 public static int[] datos = new int[3]; 
	 
	  public static String met(int i) {  
	    String salida = ""; 
	    salida = salida + datos[++i]; 
	    try { 
	      salida += datos[i+1]; 
	      salida += "OK"; 
	    } catch (Exception e){ 
	      salida += "Excepcion"; 
	    } finally { 
	      salida += "Finally"; 
	    } 
	    salida += "--"; 
	    return salida; 
	  } 
	 
	  public static void main(String [] args) { 
	    //System.out.println(met(-1));          
	    //System.out.println(met(1));          
	    //System.out.println(met(2));        
	  } 
	  
	  /* 
		00okFinally-- 
		0ExcepcionFinally-- 
		Aborta el programa ya que se produce una excepción antes de entrar en el try catch */
}
