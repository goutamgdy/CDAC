package assignment1;
public class Program {
    public static void main(String[] args){
        Team crickTeam = new Team(11);
        crickTeam.accept();
        crickTeam.display();

        Team kabTeam = new Team(7);
        kabTeam.accept();
        kabTeam.display();
    }
}
