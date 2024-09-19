package staff;
import dates.Date;
import utility.Employee;
public class Administrator extends Employee {
    private double allowance;

    public Administrator() {
    }

    public Administrator(String name, Date dob, int eid, double allowance) {
        super(name, dob, eid);
        this.allowance = allowance;
    }
    public void display(){
        super.display();
        System.out.println("Allowance: " + allowance);
    }
}
