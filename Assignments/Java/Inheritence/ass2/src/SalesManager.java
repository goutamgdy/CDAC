package staff;
import dates.Date;
import utility.Employee;
public class SalesManager extends Employee{
    private double salesTarget;
    private double perCommision;

    public SalesManager() {
    }

    public SalesManager(String name, Date dob, int eid) {
        super(name, dob, eid);
    }
    public void display(){
        super.display();
        System.out.println("SalesTarget: " + salesTarget +" PerCommision: " + perCommision);
    }
}
