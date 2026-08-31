class Bank_Account {

    int AccNo;
    String name;
    double balance;

    static double interest; // Step 1

    // Step 2: Static Block
    static {
        interest = 9.3;
    }

    // Default Constructor
    Bank_Account() {
        this.AccNo = 101;
        this.name = "vikram";
        this.balance = 500;
    }

    // Parameterized Constructor
    Bank_Account(int accNo, String name, double balance) {
        this.AccNo = accNo;
        this.name = name;
        this.balance = balance;
    }

    // Setter
    void setAccNo(int accNo) {
        this.AccNo = accNo;
    }

    void setName(String name) {
        this.name = name;
    }

    void setBalance(double balance) {
        this.balance = balance;
    }

    static void setInterest(double in) {
        interest = in;
    }

    // Getter
    int getAccNo() {
        return this.AccNo;
    }

    String getName() {
        return this.name;
    }

    double getBalance() {
        return this.balance;
    }

    double getInterest() {
        return Bank_Account.interest;
    }

    // Display
    void display() {
        System.out.println("Account_num is: " + AccNo);
        System.out.println("Name is: " + name);
        System.out.println("Balance is: " + balance);
        System.out.println("Interest is: " + interest);
    }
}


// Test Class
class TestBank_Account {

    public static void main(String[] args) {

        // Reference
        Bank_Account b1;

        // Object
        b1 = new Bank_Account(101, "vikram", 12344);

        b1.display();


        // Reference
        Bank_Account b2;

        // Object
        b2 = new Bank_Account(102, "spiderS", 12344);

        b2.display();
   
Bank_Account.setInterest(4.6);
b2.display();

    }

}