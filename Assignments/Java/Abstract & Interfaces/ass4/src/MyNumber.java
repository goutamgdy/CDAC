package implemented;
import iface.*;
public class MyNumber implements iface.AdvIntOperations, iface.BasicIntOperations{
    public boolean isOdd(int num){
        if(num % 2 !=0)return true;
        return false;
    };
    public boolean isEven(int num){
        if(num %2 == 0)return true;
        return false;
    }
    public boolean isPrime(int num){
        for(int i =2;i<num/2;i++){
            if(num % i == 0)return false;
        }
        return true;
    }
    public double calFactorial(int num){
        double fact = 1;
        for(int i = num;i>0;i--){
            fact *= i;
        }
        return fact;
    }
}
