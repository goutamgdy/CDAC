package app;
import implemented.MyNumber;
import iface.BasicIntOperations;
import java.util.Scanner;

public class Main {
    public static  void main(String[] args){
        MyNumber m1 = new MyNumber();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter num....");
        int num = sc.nextInt();
        System.out.println(m1.isOdd(num));
        System.out.println(m1.isEven(num));
        System.out.println(m1.isPrime(num));
        System.out.println(m1.calFactorial(num));
        //7BasicIntOperations.isOdd(); //cant call not satic metods from satic type;
    }
}