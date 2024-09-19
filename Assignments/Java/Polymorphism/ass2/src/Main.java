import child.Employee;
import childmost.Administrator;
import childmost.Programmer;
import childmost.SalesManager;

class Main{
    public static void main(String[] args){
        Employee e1 = new Programmer("Goutam", 18,12,2002,100,20000,"JEE", 3,1200);
        e1.display();
        System.out.println("-------------------");
        System.out.println(e1.claculateSalary());

//
    }
}