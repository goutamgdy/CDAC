package  implemented;
import java.lang.Math;
import iface.iScientificCalculator;
public class ScientificCalculator implements iScientificCalculator {
    public double sin(double angle){
        return Math.sin(angle);
    }
    public double cos(double angle){
        return Math.cos(angle);
    }
    public double tan(double angle){
        return Math.tan(angle);
    }
}
