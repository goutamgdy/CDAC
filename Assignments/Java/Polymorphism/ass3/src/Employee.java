package child;
import dates.Date;
import basemost.Person;
public abstract  class Employee extends Person {
    private int eid;
    protected double salary;
    public Employee() {
    }

//    public Employee(String name, Date dob, int eid, double salary) {
//        super(name, dob);
//        this.eid = eid;
//        this.salary = salary;
//    }

    public Employee(String name, int i, int i1, int i2, int i3,double salary) {
        super(name,i,i1,i2);
        eid= i3;
        this.salary = salary;
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


    public abstract double claculateSalary();

}
