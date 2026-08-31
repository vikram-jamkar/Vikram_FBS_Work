 class Student{ 
                int Froll;
                String name;
                String mobile;
                 
                void setFroll(int roll){
                this.Froll=roll;}
                void setname(String name){
                this.name =name;}
                void setmobile(String m){
                this.mobile=m;}
                
                void display(){
                System.out.println("Rll no is: "+ Froll);
                System.out.println("name :"+ name);
                System.out.println("mobile :"+ mobile);
                }

}//end class class member
      
     class test {
                 public static void main(String [] args){
                 Student s1;
                 s1= new Student();
                 s1.setFroll(101);
                 s1.setname("vikram");
                 s1.setmobile("9834165813");  

                
                     
                      
                 s1.display();









    
}

 

}