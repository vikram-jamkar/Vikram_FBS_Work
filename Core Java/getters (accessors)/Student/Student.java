class Student{
              int rollno;
              String name; //class member
              double mark;

               void setRollno(int rollno){
               this.rollno=rollno;
               } 


               void setName(String name){
               this.name=name;
               }
                 
               void setMark(double mark){

               this.mark=mark;
               }

               int getRollno(){
               return this.rollno;
               }
          
               String getName(){
               return this.name;
               }
                
               double getMark(){
               return this.mark;
               }
             
               void display(){

              System.out.println("Roll No: " + this.rollno);
              System.out.println("Name: " + this.name);
              System.out.println("Mark:" + this.mark);

              }
             

}//end class here 


class Test {
            public static void main(String[] args){
            Student d1 = new Student();
            d1.setRollno(101);
            d1.setName("vikram");
            d1.setMark(75);
     
            
           d1.display();


}


}//end class main here