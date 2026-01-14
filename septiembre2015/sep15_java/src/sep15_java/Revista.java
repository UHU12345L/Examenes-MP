package sep15_java;

public class Revista extends Volumen{
	private int [] numeros;
	private int n;
	
	public Revista(String t, String a, int is, int num){
		super(t, a, is);
		numeros=new int[12];
		numeros[0]=num;
		n=1;
	}
	
	void agregarNumero() {	
		agregarNumero(numeros[n-1]+1);		
	}
	
	void agregarNumero(int num) {
		 if (n==numeros.length) { 
	            int [] aux = numeros; 
	            numeros=new int[numeros.length+12]; 
	            for(int i=0; i<n;i++) 
	                numeros[i]=aux[i]; 
	        } 
	        numeros[n]=num; 
	        n++; 
	}

	@Override
	public void ver() {
		
	}
}
