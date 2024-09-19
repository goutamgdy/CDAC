package  app;
import implemented.SimpleCalculator;
import iface.iCalculator;
class Main{
    public static void main(String[] args){
        iCalculator s1 = new SimpleCalculator();
        System.out.println(s1.add(10,10));
        System.out.println(s1.subtraction(20, 10));
        System.out.println(s1.multiplication(2,2));
        System.out.println(s1.division(20, 10));
    }
}