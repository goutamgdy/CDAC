package utility.child.player;
import utility.child.Player;
public class CricketPlayer extends Player {
    private int totalRunScore;
    private int totalWicketsTaken;

    public CricketPlayer() {
    }

    public CricketPlayer(String name, int i1, int i2, int i3, int playerID,
                         double contractFees, int totalRunScore, int totalWicketsTaken) {
        super(name, i1, i2, i3, playerID, contractFees);
        this.totalRunScore = totalRunScore;
        this.totalWicketsTaken = totalWicketsTaken;
    }
    public void display(){
        super.display();
        System.out.println("totalRunScore: "+ totalRunScore +
                           " totalWicketsTaken: " +totalWicketsTaken);
    }
}
