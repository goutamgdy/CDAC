//import dates.Date;

package childmost;
import iface.iTraveller;
import child.Employee;
public class Administrator extends Employee implements  iTraveller {
    private double allowance;
    private int passNumber;
    private int travelHours;
    public Administrator() {
    }

    public Administrator(String name, int d, int m, int y, int eid, double salary, double allowance) {
        super(name,d, m,y,eid,salary);
        this.allowance = allowance;
    }
    public void display(){
        super.display();
        System.out.println("Allowance: " + allowance);
    }

    @Override
    public double claculateSalary() {
        return salary + allowance;
    }
    public double getAllowance(){
        return allowance;
    }
    public void confirm(){
        System.out.println("Administrator....");
    }

    public String getPassportDetails(){
        return "passNumber: " + passNumber;
    }

    public int getTravelHours(){
        return travelHours;
    }

}
