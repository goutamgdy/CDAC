package utility.child;
import utility.base.Person;
import utility.dates.Date;

public class Employee extends Person {
    int eid;

    public Employee() {
    }

    public Employee(String name, Date dob, int eid) {
        super(name, dob);
        this.eid = eid;
    }

    public Employee(String name, int i, int i1, int i2, int i3) {
        super(name,i,i1,i2);
        eid= i3;
    }

    @Override
    public String toString() {
        return "Employee{" +
                "eid=" + eid +
                '}';
    }
    public void display(){
        super.display();
        System.out.println("EId: " +eid);
    }
}
