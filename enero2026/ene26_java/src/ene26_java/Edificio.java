package ene26_java;

//tiene que ser clase abstracta para definir metodos abstractos
//no puede ser final porque hereda a ETSI
public abstract class Edificio { 
 private final int espacios; 
 private boolean emergencia; 

public Edificio(int espacios) { 
     this.espacios = espacios;      emergencia = false;   
 }


   //El 30% de los espacios son despachos 
	//si es void no puede devolver nada
	//no puede ser static porque accede a atributo no static
  public int getNDespachos() { 
    return espacios * 0.3; 
  } 
  
  //si es de tipo boolean debe devolver bolean, sino void
  public final boolean setAlerta(boolean e) { 
    this.emergencia = e; 
    return e;
   } 
  
  //no puede ser final porque lo hereda hijo
   public void alertaIncendio() { 
     if (emergencia) 
       System.out.println("Evacuen edificio"); 
     else 
     System.out.println("Edificio Seguro"); 
  } 
   
   
  public abstract void direccion(); 
  public boolean getEmergencia() {return emergencia;}
 } 
