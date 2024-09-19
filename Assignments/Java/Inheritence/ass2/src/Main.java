package app;
import utility.Employee;
import staff.Administrator;
import staff.Programmer;
import staff.SalesManager;
class Main{
    public static void main(String[] args){
        Programmer p1 = new Programmer("Goutam", 18,12,2002, 100,"JEE Cummunity", 2, 1200);
//        System.out.println(p1.toString());
        p1.display();
    }
}