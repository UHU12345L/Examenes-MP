package ene24_java;

public class Fecha {
    private int dia, mes, anio;
    
    public Fecha(int d, int m, int a) {
        dia = d;
        mes = m;
        anio = a;
    }
    
    public int getDia() {
        return dia;
    }
    
    public int getMes() {
        return mes;
    }
    
    public int getAnio() {
        return anio;
    }
    
    public void setFecha(int d, int m, int a) {
        dia = d;
        mes = m;
        anio = a;
    }
    
    @Override
    public String toString() {
        return dia + "/" + mes + "/" + anio;
    }
}