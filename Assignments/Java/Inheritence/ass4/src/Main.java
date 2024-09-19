package app;
import base.Point;
import child.ColorPoint;
public class Main{
    public static void main(String[] agrs){
        Point p1 = new ColorPoint(10,10,"xyz");
        p1.display();
    }
}