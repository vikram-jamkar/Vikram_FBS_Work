class Student {
               int rollno;
               String name;
               


              void setRollno(int R)
             {
              this.rollno = R;
             }//end
           
               void setName(String n)
               {
                  this.name=n;
               }
                


}//end class here




class Test {
            public static void main (String[] arrgs)
            {
              Student d1 = new Student();
              d1.setRollno(101);           
              d1.setName("vikram");


              System.out.println(d1.rollno);
              System.out.println(d1.name);
      
            }
            


} //end class main here