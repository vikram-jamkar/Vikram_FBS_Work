class Student {
               int rollno;
                String name;
              void setrollno(int r){
               this.rollno=r;}
               void setname(String n){
                this.name=n;}

}//end class for student
 

class test{
           public static void main(String [] args){
           Student s1;
           s1 = new Student();
           s1.setrollno(101);
           s1.setname("vikram");


        System.out.println(s1.rollno+""+s1.name);           

          




}//end main




}