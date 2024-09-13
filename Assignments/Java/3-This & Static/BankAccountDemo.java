class BankAccount{
    private int acc_no;
    private double balance;
    private static  float int_rate;
    static{
        int_rate = 4.5f;
    }
    public BankAccount(){
        acc_no = 1000;
        balance = 10000; // Default, no args constructor
    }
    public BankAccount(int acc_no, double balance){ //Parameterized constructor
        this.acc_no = acc_no;
        this.balance = balance;
    }
    public BankAccount(int acc_no){
        this(acc_no, 10000);
    }
    public void display(){
        System.out.println("Account: " + acc_no + " Balance without intrest: " + balance);
    }
    public double calcInterestRate(){
        balance = (float) balance; // type parsing in java - Integer.parseInt(String)=> string to int
        return balance + (( balance * int_rate) / 100); 
    }
    public static void updateInterestRate(float rate){ // Why cant be made as private...?
        int_rate = rate;
    }
    
}

class BankAccountDemo{
    public static void main(String[] args){
        BankAccount b1 = new BankAccount(1001, 20000);
        b1.calcInterestRate();
        // b1.display();
        System.out.println("Before updating interest balance: "  + b1.calcInterestRate());
        BankAccount.updateInterestRate(4.7f);
        System.out.println("After updating interest, Balance: " + b1.calcInterestRate());
        // b1.display();
    }
}

