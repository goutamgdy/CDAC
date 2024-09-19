//import dates.Date;
package childmost;
import child.Employee;
import iface.iTraveller;
public class SalesManager extends Employee implements iTraveller{
    private double salesTarget;
    private double perCommision;
    private int passNumber;
    private int travelHours;
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
        return salary + ((salary * perCommision)/100);
    }
    public double getSalesTarget(){
        return salesTarget;
    }
    public void confirm(){
        System.out.println("SalesManager....");
    }

    public String getPassportDetails(){
        return "passNumber: " + passNumber;
    }

    public int getTravelHours(){
        return travelHours;
    }
}
