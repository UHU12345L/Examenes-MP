package libProfesor;


public class ClaseB extends ClaseA { 
 String cadena; 
 public ClaseB(String cad) {       
	    super(); 
	    cadena=cad; 
	  } 
	  
	  public ClaseB(String cad, int n) {  
	    super(n);
	    cadena=cad; 
	  } 
	  
	  public ClaseB(ClaseB b) {            
	    super(b.getN());  
	    cadena=b.cadena; 
	  } 
	  
	  public String getCadena() { return cadena; }        
	  public void setCadena(String s) { cadena=s; }        
} 
