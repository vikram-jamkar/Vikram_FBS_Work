class date{
            int day,month,year;
            String dow;//reference
          

            void setday(int d){
            this.day =d;}

            void setmonth(int m){
            this.month=m;}

            void setyear(int y){
            this.year=y;}


            void setdow(String s){
            this.dow =s;}
            
              int getday(){
              return this.day;}
               int getmonth(){
              return this.month;}
              int getyear(){
                return this.year;}
              void display(){
             System.out.println(this.day+" "+this.month+" "+this.year);
}
                
           
}//end date class member 


class test{
            public static void main(String arg[]){
              date d1;
               
               d1 = new date();
               
               d1.setday(29);
               d1.setmonth(5);
               d1.setyear(2025);
               d1.setdow("Mon");
               //if(d1.getday()>d1.getday()){
               // System.out.println("d1 is youger");
                 
               // }else{System.out.println("d1 is youger");}

//System.out.println(d1.dow);             //System.out.println(d1.day+"/"+d1.month+"/"+d1.year);

              d1.display();



}



}