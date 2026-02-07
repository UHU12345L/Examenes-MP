package ene26_java;

public class Figura { 
	  private String nombre; 
	  private Punto2D ubicacion; 
	 
	  public Figura(String nombre, Punto2D ubicacion) { 
	    this.nombre = nombre; 
	    //para que sea seguro debo crear un nuevo objeto ubicacion para cada uno, para que no se vea modificado por otros setters de objetos que apunten al mismo sitio en memoria, es decir, crear una copia defensiva
	    this.ubicacion = new Punto2D(ubicacion.getX(), ubicacion.getY()); 
	  } 
	 
	  public String getNombre() { return nombre; } 
	  public Punto2D getUbicacion() { return ubicacion; } 
	 
	  public void setUbicacion(Punto2D nuevaUbicacion) { 
		    this.ubicacion = new Punto2D(nuevaUbicacion.getX(), nuevaUbicacion.getY()); 
	  } 
	 
	  public boolean plano_terminado() { return true; } 
	
	  public Object clone() {
		  Figura obj=null;
		  
		  try {
			obj=(Figura)super.clone();
			obj.ubicacion=(Punto2D)obj.ubicacion.clone();
		  }catch(CloneNotSupportedException ex) {
			  System.out.println("No se ha podido hacer el clone");
		  }  
		  return obj;
	  }
	 
	
	  public static void main(String[] args) { 
	    Figura pixel = new Figura("pixel", new Punto2D(5, 10)); 
	    System.out.println(pixel.getNombre() + " está en " + 
	                       pixel.getUbicacion()); 	  
	}
	  
	  //5. De la clase Figura y Punto2D pueden ser final nombre de la clase Figura porque no tiene setter
	  //6. puedes modificar la ubicacion de pixel creando un objeto Figura y modificando la ubicacion con los setter de Punto2D:
	  
	  public static void main(String[] args) { 
		  Figura pixel = new Figura("pixel", new Punto2D(5, 10)); 
		  System.out.println("pixel está en " + pixel.getUbicacion()); 
		  Punto2D ubi = pixel.getUbicacion(); 
		  ubi.setX(1);  ubi.setY(4); 
		  System.out.println("pixel está en " + pixel.getUbicacion()); 
		} 
	  
	  /*7. setUbicacion no funcionaria su ubicacion fuese final porque no puedo modificarlo directamente(reasignar la referencia), pero puedo modificar los datos que contiene usando setX, setY:
	  	public void setUbicacion(Punto2D nuevaUbicacion) { 
		this.ubicacion.setX( nuevaUbicacion.getX() ); 
		this.ubicacion.setY( nuevaUbicacion.getY() ); 
		} 
	  
	  */
}