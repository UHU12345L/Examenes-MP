package libPruebas;

import feb21_java.*;


public class Prueba1 { 
 public static void main(String[] args) { 
   Persona a=new Persona("juan", 23), b=(Persona)a.clone(); 
   a.setEdad(46); 
   System.out.println(a); 
   a.agregar(959217388); a.agregar(959217373); 
   Persona c=(Persona)a.clone(); 
   c.agregar(959444444); 
   System.out.println(a); 
   System.out.println(b); 
   System.out.println(c); 
 } 
} 