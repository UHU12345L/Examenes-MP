package feb21_java;

public class Persona  implements Cloneable { 
	  private int edad; 
	  private int [] telefonos; //capacidad inicial 2 ampliable dinámicamente 
	  private int n; 
	  private String nombre; 
	 
	  public Persona(String nombre, int e) { 
	    this.nombre = nombre; 
	    edad = e; 
	    n = 0; 
	    telefonos = new int[2]; 
	  } 
	   
	  public void setEdad(int e) { edad=e; } 
	 
	  public String toString() {
		  String s=nombre+" tiene "+ edad + " años y "+n+" teléfonos.";
			if(n>0){
				s=s+"( ";
				for(int i=0;i<n;i++) {
					s=s+telefonos[i]+" ";
				}
				s=s+" )  ";
			}
				 return s;
	  }
	  
	  public void agregar(int num) {
		  if(n==telefonos.length) {
			  int [] aux= telefonos;
			  telefonos=new int[n*2];
			  for(int i=0;i<n;i++) {
				  telefonos[i]=aux[i];
			  }
		  } 
			  telefonos[n]=num;
			  n++;
		  	  
	  }
	  
	  public Object clone() {
		  Persona obj=null;
		  try {
			  obj=(Persona) super.clone(); //primitivos e inmutables no clonar
			  obj.telefonos=(int[])obj.telefonos.clone();
		  }catch(CloneNotSupportedException ex) {
			  System.out.println("No se ha podido clonar");
		  }
		  return obj;
	  }
	  
	  /*
	   public Persona(Persona p) {        
			nombre = p.nombre; 
			edad=p.edad; 
			n=p.n 
			telefonos = (int [])p.telefonos.clone(); 
			} 
		public Object clone() { 
			return new Persona (this);  
		}  */
	} 
