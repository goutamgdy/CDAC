class BankAccount{
    int acc_no;
    double balance;
    public BankAccount(){
        acc_no = 1000;
        balance = 10000; // Default, no args constructor
    }
    public BankAccount(int acc_no, double balance){ //Parameterized constructor
        this.acc_no = acc_no;
        this.balance = balance;
    }
    public BankAccount(inr acc_no){
        this(acc_no, 10000);
    }
    public void display(){
        System.out.println("Account: " + acc_no + " Balance: " + balance);
    }
}

class BankAccountDemo(){
    public static void main(String[] args){
        BankAccount b1(1001, 20000);
        b1.display();
    }
}