import java.lang.String;
public class Main{
    public static void main(String[] args){
        int len = args.length;
        for(int i=0;i<len;i++){
            System.out.println(args[i].length());
        }
        String key = "Goutam";
        for(int i =0;i<len;i++){
            if(args[i].equals(key)){
                System.out.println("Key Found....!");
            }
        }
        System.out.println("Before sorting");
        for(int i =0;i<len;i++){
            System.out.println(args[i]);
        }
        for(int i = 0;i<len-1;i++){
            for(int j =i +1;j<len;j++){
                if(args[i].compareTo(args[j]) > 0){
                    String temp = args[i];
                    args[i] = args[j];
                    args[j] = temp;
                }
            }
        }
        System.out.println("---------------------");
        System.out.println("After sorting");
        for(int i = 0;i<len;i++){
            System.out.println(args[i]);
        }
    }
}