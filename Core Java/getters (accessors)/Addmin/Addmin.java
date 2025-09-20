class Addmin {
             int id;
             String name;
             double salary;
             
               void setId(int id) 
               {
                this.id = id;
                }
               void setSalary(double salary){ this.salary =salary; } 
               void setName(String name){ this.name=name;}
              

                    //  get using

                 int getId(){
                     return this.id;}
           
                 String getName(){
                        return this.name;}
            
                 double getSalary(){
                        return this.salary;
                        }  
             
                        void display(){
                        System.out.println("Id:"+ this.id);
                        System.out.println("Name:"+this.name);
                        System.out.println("Salary:"+ this.salary);
                     }
                        

}//end here class 
   
 
 
class Test {
            public static void main(String[] args){
            Addmin d1 = new Addmin();
            d1.setId(01);
            d1.setName("vikram");
            d1.setSalary(44000);
         
  

            d1.display();

}


}//end main here