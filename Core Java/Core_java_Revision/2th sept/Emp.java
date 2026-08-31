class Emp{
           int id ;
           String name;
           double salary; 
           
             void setid(int id){
                 this.id=id;}
                 void setname(String n){
                 this.name=n;}

                  void setsalary(double s){
                   this.salary=s;}
               

}//end class  class member 
 

class test{

               public static void main(String [] args){
               Emp e1;
               e1 = new Emp();

               e1.setid(1);
               e1.setname("vikram");
               e1.setsalary(40000);
    
               //System.out.println(e1.id,e1.name,e1.salary);


System.out.println(e1.id + " " + e1.name + " " + e1.salary);


 }//end main


 }//end test class