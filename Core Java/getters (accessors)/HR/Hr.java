class Hr {
          int id;
          String name;
          double salary;
          double commission;

          //seter using
              void setId(int id){
                    this.id  = id;}
        
              void setName(String name){
                   this.name = name;}

              void setCommission(double commission){
                   this.commission= commission;}
          
              void setSalary(double salary){
                   this.salary = salary;}

               //geter using
               
               int getId(){
                  return this.id;}
           
               String getName(){
                       return this.name;}
               double getSalary(){
                      return this.salary;}
               double getCommission(){
                      return this.commission;}
             
                //display
               void display(){
               System.out.println("ID"+ this.id);
               System.out.println("Name"+this.name); 
               System.out.println("Salary"+ this.salary);
               System.out.println("Commission"+ this.commission); }
 

           
           }//end here class 




class Test {
            public static void main(String[] args){
            Hr d1 = new Hr();
            d1.setId(102);
            d1.setName("vikram");
            d1.setSalary(25000);
            d1.setCommission(5000);


            d1.display();
      
}




}//end main here 