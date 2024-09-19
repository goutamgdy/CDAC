package base;
public class Point {
    int x,y;

    public Point() {
    }

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
    public void display(){
        System.out.println("[ " + x +", " +y+ " ]");
    }
}
