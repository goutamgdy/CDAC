package app;
import child.Employee;
import childmost.Administrator;
import childmost.Programmer;
import childmost.SalesManager;

class Main{
    public static void showMoreDetails(Employee[] earr){
        for (Employee employee : earr) {
            employee.display();
            System.out.println("---------------------");
        }
    }
    public static void main(String[] args){
        Employee [] earr = new Employee[3]; //Just employee array refernce variable
        //Employee e1 = new Employee(); // Not possible as Employee is abstract
        earr[0] = new Programmer();
        earr[1] = new SalesManager();
        earr[2] = new Administrator();
        for(int i =0;i<earr.length;i++){
            if(earr[i] instanceof Programmer)
                ((Programmer)earr[i]).confirm();
            else if(earr[i] instanceof SalesManager)
                ((SalesManager)earr[i]).confirm();
            else if(earr[i] instanceof Administrator)
            ((Administrator)earr[i]).confirm();
        }
//        showMoreDetails(earr);


    }
}