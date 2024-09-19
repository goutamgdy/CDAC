package utility.base;
import utility.dates.Date;
public class Person {
    protected String name;
    Date dob;

    public Person() {
        name = "NA";
        dob = new Date();
    }

    public Person(String name,Date dob) {
        this.dob = new Date(dob);
        this.name = name;
    }

    public Person(String name, int i1, int i2, int i3) {
        this.name = name;
        this.dob = new Date(i1, i2,i3);

    }
    public void display(){
        System.out.println("Name: " + name);
        dob.display();
    }

    @Override
    public  String toString() {
        return "Person{" +
                "name='" + name + '\'' +
                ", dob=" + dob +
                '}';
    }
}
