package child;
import base.Point;
public class ColorPoint extends Point {
    private String color;
    private static String [] colors;
    static{
        colors = new String[5];
		colors[0] = "blue";
		colors[1] = "red";
		colors[2] = "green";
		colors[3] = "yellow";
		colors[4] = "orange";
    }
    public ColorPoint() {
    }

    public ColorPoint(int x, int y, String color) {

        super(x,y);
        boolean flag = false;
        for(int i =0;i<colors.length;i++){
            String cur = colors[i].toLowerCase();
            if(colors[i].equals(color.toLowerCase())){
                flag = true;
            }
        }
        if(flag){
            this.color= color;
        }
        else{
            this.color = "White";
        }
    }
    public void display(){
        super.display();
        System.out.println("Color: " + color);
    }
}
