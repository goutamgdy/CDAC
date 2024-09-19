package implemented;
import iface.iCalculator;
public class SimpleCalculator implements iCalculator{
    private int a, b;

    public SimpleCalculator() {
    }

    public SimpleCalculator(int a, int b) {
        this.a = a;
        this.b = b;
    }

    public double add(int a, int b){
        return a + b;
    }
    public double subtraction(int a, int b){
        return a - b;
    }
    public double multiplication(int a, int b){
        return a * b;
    }
    public double division(int a, int b){
        return a / b;
    }
}
