package libProfesor;

public class ClaseA {
	 private int [] tabla; 
	  private int n;
	  
	  public ClaseA() {
		  this.n=0;
		  tabla=null;
	  }
	  
	  public ClaseA(int n){
		  this.n=n;
		  tabla=null;
		  if(n>0) {
			  tabla=new int[n];
			  for(int i=0; i<n;i++) {
				  tabla[i]=i*2+1;
			  }
		  }
	  }
	  public int getN() {return n;}
	  
	  public static boolean mayor(ClaseA a, ClaseA b) {
		  return a.getN()>b.getN();
	  }
	  
	  public int get(int i) { return tabla[i]; } 
	  
	  public String toString() {
		  String s= "";
		  if(n>0) {
			  for(int i=0; i<n;i++) {
				  s=s+tabla[i]+" - ";
			  }
			  s=s+tabla[n-1];
		  }		  
		  return s;	  
	  }
	  
	  
	  
}
