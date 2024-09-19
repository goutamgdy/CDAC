import java.util.Scanner;
public class FoodMenu {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        boolean menu = true;
        int billamount = 0;
        while(menu){
            int rate, choice ,qty;
            System.out.println("What do u want to have today !!");
            System.out.println("1. Dosa");
            System.out.println("2. Samose");
            System.out.println("3. MissalPav");
            System.out.println("0. Exit");
            choice = sc.nextInt();
            switch (choice) {
                case 0:
                    menu = false;
                    break;
                case 1:
                    System.out.println("Enter quantity: ");
                    qty = sc.nextInt();
                    rate = 90 * qty;
                    System.out.println("Added to Cart: Dosa->RS. " + rate);
                    billamount = billamount + rate;
                    break;
                case 2:
                    System.out.println("Enter quantity: ");
                    qty = sc.nextInt();
                    rate = 15 * qty;
                    System.out.println("Added to Cart: Samose->RS. " + rate);
                    billamount = billamount + rate;
                    break;
                case 3:
                    System.out.println("Enter quantity: ");
                    qty = sc.nextInt();
                    rate = 45 * qty;
                    System.out.println("Added to Cart: MissalPav->RS. " + rate);
                    billamount = billamount + rate;
                    break;
                default:
                    break;
            }
        }
        if(billamount > 0){
            System.out.println("Total Bill Amount: " + billamount);
        }

    }
}
