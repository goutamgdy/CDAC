package utility.child;
import utility.base.Person;
public class Player extends  Person{
    private int playerID;
    private double contractFees;

    public Player() {
    }

    public Player(String name, int i1, int i2, int i3, int playerID, double contractFees) {
        super(name, i1, i2, i3);
        this.playerID = playerID;
        this.contractFees = contractFees;
    }
    public void display(){
        super.display();
        System.out.println("playerID: "+ playerID +" contractFees: " + contractFees);
    }
}
