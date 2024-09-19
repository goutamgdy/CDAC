package childmost;
//import dates.Date;
import child.Employee;
public class Programmer extends Employee {
    private String projectTitle;
    private int extraHours;
    private double chargesPerExtraHour;

    public Programmer() {
    }

    public Programmer(String name, int d,int m, int y, int eid,double  salary, String projectTitle,
                      int extraHours, double chargesPerExtraHour) {
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
        return super.claculateSalary() + (extraHours * chargesPerExtraHour);
    }
}
