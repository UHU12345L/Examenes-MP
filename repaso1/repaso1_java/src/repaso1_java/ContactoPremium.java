package repaso1_java;

public class ContactoPremium extends Contacto{
	
	private double descuento;
	private String empresa;
    private int numeroCliente;
    private static int contador=0;
    
    public void setDescuento(double d) {
    	descuento=d;
    }
    
    public ContactoPremium(String nom, int tel, String mail, String em) {
    	super(nom, tel, mail);
    	empresa=em;
    }
    
    public ContactoPremium(ContactoPremium cp) {
    	super(cp);
    	empresa=cp.empresa;
    }
    
    
    

}
