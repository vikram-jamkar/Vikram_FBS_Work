class Student{
              int fbs_Id;
              String Name;
              int distanceTravel;
              
              static int Student_count;
              
               static{
                      Student_count=0;}
                  
            static void setCount(int count) {
                  Student.Student_count = count;
              }

               static  int getCount() {
               return Student.Student_count;
               }



             //defult countructer
             Student()
             {
             this.fbs_Id=1;
             this.Name="vikram";
             this.distanceTravel=12;
             Student_count++;
             }


             //parameter contructer
             Student(int  id ,String name, int dist ) {
             this.fbs_Id=id;
             this.Name=name;
             this.distanceTravel=dist;
              Student_count++;
            }


       
            //seter & geters
            void setfbs_Id(int id)
            {
             this.fbs_Id=id;
            }

            void  setName(String name)
            {
             this.Name=name;
            }
            void setdistanceTravel(int dist)
            {
             this.distanceTravel=dist;
            }
                          
            int getfbs_Id()
            {
            return this.fbs_Id;
            }
   
            String getName()
            {
            return this.Name;
            }
            
            int getdistanceTravel()
            {
             return this.distanceTravel;
            }
            
            void display()
            {
             System.out.println("fbs_Id :"+this.fbs_Id);
             System.out.println("Name :"+this.Name);
             System.out.println("distance :"+this.distanceTravel);
            // System.out.println("s_count :"+ s_count);

            }
             

 
}//end here class member




class TestStudent{
                  public static void main(String [] args){
                  Student s1;//refrese
                  s1 = new Student(102,"athrva",75);//object
                  s1.display();
                  Student.getCount();
 s1.display();

                   
}




}//end here 