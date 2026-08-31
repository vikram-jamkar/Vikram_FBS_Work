class Date { 
            int day,month,year;
            String dow;
           //seter geter  amd display//
          
           // defult constucter
            
           Date(){
           this.day=7;
           this.month=5;
           this.year=2023;
           this.dow="sunday";
           System.out.println("defulat contructer call");}

           Date(int d,int m,int y,String dow){
           this.day=d;
           this.month=m;
           this.year=y;
           this.dow=dow;
System.out.println("paramaeterice contructer");
       
}// papamerice countructer

       void display(){
       System.out.println("day : "+ day);
       System.out.println("month:"+month);
       System.out.println("year :"+ year);
       System.out.println("dow:"+dow);}



}

class test {
            public static void main(String[] args){  
            Date d1;
            Date d2;

           d1 = new Date(); 

           d1.display(); 
                     
           d2 = new Date(1,5,2026,"mon");  
            d2.display();           


       



}//end here main



}