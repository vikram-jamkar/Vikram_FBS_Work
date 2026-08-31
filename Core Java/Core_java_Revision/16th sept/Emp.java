class Emp {
            int id;
            String name;
            double salary;
              // Default Constructor
    Emp() {id = 1;
name = "vikram";
salary = 200.0;
    }         // Parameterized Constructor
    Emp(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }
            void setid(int id){
            this.id=id;}
            void setname(String name){
            this.name=name;}
            void setsalary(double salary){
            this.salary=salary;}
          
             void display(){
                System.out.println("id :"+ id);
                System.out.println("name: "+ name);
                System.out.println("salary: "+ salary); }  
} //end class student and class members


class test{
             public static void main(String [] args){
            // Emp e1;
            // e1 = new Emp();
             //e1.setid(1);
             //e1.setname("vikram");
             //e1.setsalary(40000.00);

              //e1.display();

       Emp [] brr = new Emp[5];
       // array of refreces
       // whic has null at all
      
 for(int i = 0; i < brr.length;i++){
 System.out.println(brr[i]);}
  
        //above 5 time null    
  //for(int i = 0; i < brr.length;i++){
  //brr[i].display();
   brr[0] = new  Emp();
   brr[1] = new  Emp(101,"sachin",2000);//paramterice


for(int i = 0 ; i <brr.length; i++){
brr[i].display();
}         
          
    

}//end here main




}//end class test