package sep15_java;

public class Biblioteca {
	  private Volumen [] deposito; 
	    private int n; 
	  
	    void agregarNumero() { 
	        for (int i=0; i<n; i++) { 
	            if(deposito[i].getClass() == Revista.class) { 
	               ((Revista)deposito[i]).agregarNumero(); 
	            } 
	        } 
	    }
}
