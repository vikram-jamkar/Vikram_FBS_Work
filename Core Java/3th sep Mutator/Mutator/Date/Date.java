class Date {
            int day,month,year;
            String dow; // reference
             
          
             void setDay(int d)
             {
              this.day=d;
             }//end
             
             void setMonth(int m)
             {
              this.month = m;  

             }//end
       
              void setYear(int y)
             {
              this.year = y;         
              }//end 
    
              void setDow(String dow)
              {
               this.dow = dow;     
         
              }//end  

}// end here class



class Test {
            public static void main(String[] arrgs){
              
             Date d1 = new Date();           
             d1.setDay(28);//using seter method
             d1.setMonth(5);//using seter method 
             d1.setYear(1998);
             d1.setDow("sun");



             System.out.println(d1.day);  
             System.out.println(d1.month);
             System.out.println(d1.year);
             System.out.println(d1.dow);
 

              }

          



}//main class end here 