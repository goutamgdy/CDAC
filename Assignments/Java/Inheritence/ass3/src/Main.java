package utility.app;
import utility.child.player.CricketPlayer;
import utility.child.player.FootballPlayer;
import utility.base.Person;
class Main{
    public static void main(String[] args){
//        CricketPlayer c1 = new CricketPlayer("Goutam", 18,12,2002,
//                100,2000000,264,5);
//        c1.display();
        FootballPlayer f1 = new FootballPlayer("Goutam", 18,12,2002,
                100,2000000,3);
        f1.display();
    }
}