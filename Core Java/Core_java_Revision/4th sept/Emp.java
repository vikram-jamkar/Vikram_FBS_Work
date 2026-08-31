class Emp {
            int id;
            String name;
            double salary;
              
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
             Emp e1;
             e1 = new Emp();
             e1.setid(1);
             e1.setname("vikram");
             e1.setsalary(40000.00);

              e1.display();
            
               
              

}//end here main




}//end class test