package mypack;

public class Date {
                   int day,month,year;
                   Date(){
                	   
                   }
				     Date(int day, int month, int year) {
					
					 this.day = day;
					 this.month = month;
					 this.year = year;
				   }
                   
}//Date end here

class Test{
	       public static void main(String[] args) {
	    	                                       Date d1;
	    	                                       d1 = new  Date(1,2,2025);
	    	                                       System.out.println(d1);
	       }
}