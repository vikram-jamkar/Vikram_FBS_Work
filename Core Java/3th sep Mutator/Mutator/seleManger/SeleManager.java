class SeleManager{
                  int id;
                  String name;
                  double salary;
                  int target;
                  

   
               void setId(int Id){
               this.id = Id;}
     
               void setName(String n){
               this.name = n;}
             
               void setSalary(double  s){
               this.salary = s;}

               void setTarget(int t){
               this.target = t;}





}//end call here 
 
  class Test {
              public static void main (String[] arrgs){
              SeleManager d1 = new SeleManager();
              
             d1.setId(101);
             d1.setName("vikram");
             d1.setSalary(25000);
             d1.setTarget(50);

      
                    
       
            System.out.println(d1.id);
            System.out.println(d1.name);
            System.out.println(d1.salary);
            System.out.println(d1.target);

}
              


}// end main here