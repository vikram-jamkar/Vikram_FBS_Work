class BankAccount{
                   int accno;
                   String name;
                   double balance;
                  
                 void setAccNo(int accno){
                       this.accno = accno;}
                  
                 void setName(String name){
                      this.name = name;   }

                 void setBalance(double balance){
                      this.balance = balance;}

        
                 int getAccountBank(){
                     return this.accno;}
    
                 double getBalance(){
                        return this.balance;}
                
                 String getName(){
                        return this.name;}
           
                 void display(){
                                System.out.println("AccountNo:"+ this.accno);
                                System.out.println("Name:"+this.name);
                                System.out.println("Balance:"+this.balance);}
                  
                  }//end here class 



class Test{
           public static void main(String[] args){
           BankAccount d1 = new BankAccount();
           d1.setAccNo(23);
           d1.setName("vikran");
           d1.setBalance(5000);

           d1.display();

}
}//End here main 