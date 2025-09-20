class Date {
            int day,month,year;
            String dow; // reference
             
          
            
 void setDay(int d)
             {
              this.day=d;
             }//end
             
          
    // int getDay(){
    // return this.day;
//}

         void display(){
        
          System.out.println(this.day);


}




}// end here class



class Test {
            public static void main(String[] arrgs){
              
              Date d1 = new Date(); 
              Date d2 = new Date();           
              d1.setDay(28);//using seter method
              d2.setDay(23);
             // if(d1.getDay() > d2.getDay())
             //{
            // System.out.println("d1 is younger");
             //}
            // else{
                  // System.out.println("d2 isyoungerr");
                 // }

              //System.out.println(d1.getDay()+"/"+ d2.getDay());
              d1.display();
              d2.display();
 

              }

          



}//main class end here 