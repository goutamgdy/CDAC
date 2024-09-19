package childmost;
import dates.Date;
import child.Employee;
public class SalesManager extends Employee{
    private double salesTarget;
    private double perCommision;

    public SalesManager() {
    }

    public SalesManager(String name, int d,int m, int y, int eid,double salary,double salesTarget,double perCommision) {
        super(name, d,m,y,eid,salary);
        this.salesTarget = salesTarget;
        this.perCommision = perCommision;
    }
    public void display(){
        super.display();
        System.out.println("SalesTarget: " + salesTarget +" PerCommision: " + perCommision);
    }

    @Override
    public double claculateSalary() {
        return super.claculateSalary() + ((super.claculateSalary() * perCommision)/100);
    }
}
