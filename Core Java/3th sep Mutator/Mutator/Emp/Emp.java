class Emp {
               int id;
               String name;
               double salary;


                void setId(int id)
                {
                 this.id = id;
                }//end
             


                 void setName(String n)
                 {
                  this.name=n;
                  }//end
                
                    void setSalary(double s){
                   
                    this.salary=s;
                    }

}//end class here




class Test {
            public static void main (String[] arrgs)
            {
              Emp d1 = new Emp();
              d1.setId(101);  //using seter         
              d1.setName("vikram");//seter
              d1.setSalary(25000.0);

              System.out.println(d1.id);
              System.out.println(d1.name);
              System.out.println(d1.salary);
      
            }
            


} //end class main here