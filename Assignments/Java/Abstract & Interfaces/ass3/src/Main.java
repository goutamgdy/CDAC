import iface.iScientificCalculator;
import implemented.ScientificCalculator;
public class Main{
    public static void main(String[] args){
        iScientificCalculator c1 = new ScientificCalculator();
        System.out.println(c1.sin(30));
        System.out.println(c1.cos(30));
        System.out.println(c1.tan(30));
    }
}