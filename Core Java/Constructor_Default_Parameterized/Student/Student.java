class Student {
               int rollno; 
               String name;
               double mark;
               //default counstucter       
              Student (){
                  this.rollno = 1;
                  this.name = "Unknown";
                  this.mark = 0.0;
                  System.out.println("in default cunstucter call");
 
                  } //end here 
             
             
                  
               void display(){
                          System.out.println("Rollno"+ this.rollno);
                          System.out.println("Name:"+ this.name);
                          System.out.println("mark"+this.mark);}
 
              Student(int rollno,String name,double mark){
                        this.rollno = rollno ;
                        this.name = name;
                        this.mark = mark;
                        System.out.println("in parameter cunstucter call");
                        };
 
}//end here class 
    
             
       
  
class Test {
            public static void main(String[] arrg){
            
            Student d1 = new  Student();
              
            d1.display();

            Student d2 = new Student(101,"vikram",95.2);
           
           d2.display();


}
}//end here main