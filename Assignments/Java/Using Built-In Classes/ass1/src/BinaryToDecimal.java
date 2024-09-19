import java.lang.String;
import java.util.*;
//Binary to Decimal
public class BinaryToDecimal{
    public static void main(String[] args){
        String bin = "1010";
        int deci = 0;
        int len = bin.length();
        int p  = 0;
        for(int i=len-1; i>=0; i--){
            if(bin.charAt(i) == '1'){
                deci += (int)Math.pow(2, p);
            }
            p++;
        }
        System.out.println(deci);
    }
}