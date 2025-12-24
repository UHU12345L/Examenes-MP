package feb21_java;

public class A {
	 private final int at = 5; 
	 
	  //public static int met() { return at; }  no puede acceder a variable miembro porque es estatico
	  //public void proceso() { System.out.println(at); at++; } at es final, no la puedes incrementar
	  public final void saludo() {  System.out.println("hola"); }
}
