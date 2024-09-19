import child.Employee;
import base.Person;

class Main {
    public static void main(String[] args) {
        Employee p1 = new Employee("Goutam", 1, 1, 2000, 100);
//        System.out.println(p1.toString());
        System.out.println(p1);//Default call to toString()
    }
}