package assignment1;
import java.util.*;
class Player{
    private int playerNo;
    private String state, city, name;
    public Player(){
        playerNo = 0;
        name = "NA";
        state  = "NA";
        city = "NA";
    }
    public void accept(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Player number->");
        playerNo = sc.nextInt();
        System.out.println("Enter palyer Name, City and State->");
        name = sc.next();
        state  = sc.next();
        city = sc.next();
    }
    public void display(){
        System.out.println("**************************");
        System.out.println("Plater Number: " + playerNo);
        System.out.println("Name: " + name);
        System.out.println("Address: " + city + ", " + state);
    }
}
