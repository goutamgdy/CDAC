package childmost;
import child.Employee;
import iface.iTraveller;
public class Programmer extends Employee implements iTraveller{
    private String projectTitle;
    private int extraHours;
    private double chargesPerExtraHour;
    private int passNumber;
    private int travelHours;


    public Programmer() {
    }

    public Programmer(String name, int d,int m, int y, int eid,double  salary, String projectTitle,
                      int extraHours, double chargesPerExtraHour,int passNumber, int travelHours) {
        super(name, d, m, y, eid,salary);
        this.projectTitle = projectTitle;
        this.extraHours = extraHours;
        this.chargesPerExtraHour = chargesPerExtraHour;
    }
    public void display(){
        super.display();
        System.out.println("ProjectTitle: " + projectTitle + " extraHours: "+ extraHours + " changesPerExtraHour:  " + chargesPerExtraHour);
    }

    @Override
    public double claculateSalary() {
        return salary + (extraHours * chargesPerExtraHour);
    }
    public String getProjectName(){
        return projectTitle;
    }
    public void confirm(){
        System.out.println("Programmer....");
    }
    public String getPassportDetails(){
        return "passNumber: " + passNumber;
    }

    public int getTravelHours(){
        return travelHours;
    }

}
















