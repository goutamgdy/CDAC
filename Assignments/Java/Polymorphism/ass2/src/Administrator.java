package childmost;
import dates.Date;
import child.Employee;
public class Administrator extends Employee {
    private double allowance;

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
        return super.claculateSalary() + allowance;
    }
}
