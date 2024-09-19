package app;
import iface.iTraveller;
import child.Employee;
import childmost.Administrator;
import childmost.Programmer;
import childmost.SalesManager;

class Main{
    public static void showMoreDetails(iTraveller[] earr) {
        for (iTraveller employee : earr) {
            if(employee instanceof SalesManager) {
                System.out.println(((SalesManager) employee).getPassportDetails());
                System.out.println("Travell Hours: " + ((SalesManager) employee).getTravelHours());
            }
            else if(employee instanceof Programmer) {
                System.out.println(((Programmer) employee).getPassportDetails());
                System.out.println("Travell Hours: " + ((Programmer) employee).getTravelHours());
            }

            else if(employee instanceof Administrator) {
                System.out.println(((Administrator) employee).getPassportDetails());
                System.out.println("Travell Hours: " + ((Administrator) employee).getTravelHours());
            }
        }
    }
    public static void main(String[] args){
        iTraveller [] earr = new iTraveller[3]; //Just employee array refernce variable
        //Employee e1 = new Employee(); // Not possible as Employee is abstract
        earr[0] = new Programmer();
        earr[1] = new SalesManager();
        earr[2] = new Administrator();
//        for(int i =0;i<earr.length;i++){
//            if(earr[i] instanceof Programmer)
//                ((Programmer)earr[i]).confirm();
//            else if(earr[i] instanceof SalesManager)
//                ((SalesManager)earr[i]).confirm();
//            else if(earr[i] instanceof Administrator)
//            ((Administrator)earr[i]).confirm();
//        }
        showMoreDetails(earr);


    }
}