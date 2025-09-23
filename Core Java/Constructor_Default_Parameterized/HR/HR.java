class HR {
          int id;
          String name;
          double salary;
          double commission;
              
        
          //default constructor
         HR(){
            this.id = 2;
            this.name = "unkonw";
            this.salary = 0.0;
            this.commission = 0.0;
            System.out.println("in defualt constructer");
}//end here

           //parameterconstruter
           HR(int id,String name,double salary,double commission){

                                  this.id =id;
                                  this.salary = salary;
                                  this.commission = commission;
                                  System.out.println("in parameter constructer");

                                  }


    


                          void display(){
                          System.out.println("Id:"+this.id);
                          System.out.println("Name:"+ this.name);
                          System.out.println("Salary:"+this.salary);
                          System.out.println("Commission:"+this.commission);}




}//end here class
 
      
 
class Test {
            public static void main(String[] args){
            HR d1 =new  HR();
              d1.display();
 
          HR d2 = new HR (01, "vikram",35000,4000);
  
                         d2.display();

}
}//end here class main 