package utility.child.player;
import utility.child.Player;
public class FootballPlayer extends Player {
    private int totalGoalsScored;

    public FootballPlayer() {
    }

    public FootballPlayer(String name, int i1, int i2, int i3, int playerID,
                          double contractFees, int totalGoalsScored) {
        super(name, i1, i2, i3, playerID, contractFees);
        this.totalGoalsScored = totalGoalsScored;
    }
    public void display(){
        super.display();
        System.out.println("totalGoalsScored: " + totalGoalsScored);
    }
}
