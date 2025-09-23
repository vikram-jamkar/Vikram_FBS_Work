class Date {
            int day,month,year;
            String dow;




          Date(){// default constructor
                 this.day = 28;
                 this.month = 05;
                 this.year = 1998;
                 this.dow = "sun";
                 System.out.println("default constructor call");
              }//end here default
          
          
           void display(){
                       System.out.println("Day"+ this.day);
                      System.out.println("Month"+ this.month);
                      System.out.println("Year"+ this.year);
                      System.out.println("dow"+this.dow);}//end dsplay
          
         
          
          Date(int d,int m ,int y,String s){// parameterized constructor
                                   this.day = d;
                                   this.month = m;
                                   this.year = y;
                                   this.dow = s;         
                                   System.out.println("parameter consucter call");}//end here      


}//class end here 
 
 
 
 
class Test{
           public static void main(String[] args){
           Date d1 = new Date();// default constructor call
           

          
           d1.display();

           Date d2  = new Date(21,9,2025,"sun"); // parameterized constructor cal
            
           d2.display();
           

}
}//end here main