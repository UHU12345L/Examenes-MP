package ene26_java;

//no es implements, es extends para clases hijas
public class ETSI extends Edificio { 
	private int temperatura; 
	
	public ETSI(int temperatura, int espacios){ 
		//lo primero que hay que hacer es el super
	    super(espacios); 
		this.temperatura = this.temperatura; 
	  } 
	  
	 
	public final void alertaIncendio() { 
	     super.setAlerta(temperatura >= 50); 
	     //aqui necesito getter de emergencia porque emergencia es privado en padre
	    if (getEmergencia()){ 
	      System.out.println("Evacuen ETSI"); 
	     }else{ 
	       System.out.println("ETSI Seguro"); 
	     } 
	   } 
	  
	 
	public void direccion() { 
	    System.out.println("La direccion de la ETSI es: Avda. de las Fuerzas Armadas"); 
	   } 
	  
	 } 
