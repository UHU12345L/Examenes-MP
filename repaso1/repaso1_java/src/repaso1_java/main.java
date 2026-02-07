package repaso1_java;

public class main {

	public static void main(String[] args) {
		 Contacto c1=new Contacto("Ana", 600111222, "ana@email.com" );
		
		 Contacto c2=new Contacto("Luis",600333444, "luis@email.com");
		Contacto c3= new Contacto (c1);
		
		 
			System.out.println(c1);
			System.out.println(c2);
			System.out.println(c3);
			
			c3=c2;
			
			System.out.println(c3);
			
			System.out.println("---CONTACTOS PREMIUM---");
			
	}

}
