package ene26_java;

public class Punto2D { 
	  private int x; 
	  private int y; 
	 
	  public Punto2D(int x, int y) { 
	    this.x = x; 
	    this.y = y; 
	  } 
	 
	  public int getX() { return x; } 
	  public int getY() { return y; } 
	 
	  public void setX(int x) throws Exception{  
		  if(x<0) {
			  throw new Exception();
		  }
	    this.x = x;  
	  } 
	 
	  public void setY(int y) throws Exception {  
		  if(y<0) {
			  throw new Exception();
		  }
	    this.y = y;  
	  } 
	  
	  public Object clone() throws CloneNotSupportedException{
		  Object obj=null;
		  try {
			  obj=super.clone();
		  }catch(CloneNotSupportedException ex) {
			  System.out.println("No se ha podido hacer el clone");
		  }
		  return obj;
	  }
	 
	  @Override 
	  public String toString() { 
	    return "(" + x + ", " + y + ")"; 
	  } 
	  
	  public static void main(String[] args) { 
		  try {
			  Punto2D p=new Punto2D(1,2);
			  p.setX(-1); p.setY(-2);
		  }catch(Exception ex) {
			  System.out.println("coordenada negativa"); 

		  }
	  } 
	} 