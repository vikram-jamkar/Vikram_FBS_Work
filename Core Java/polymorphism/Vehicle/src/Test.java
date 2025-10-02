class  Vehicle {
	void  Brake() {
		         System.out.println("Vehicle brake apply");
	}
}//end here class


class bike extends Vehicle {
	        
     	    //Override
	void Brake() {
		System.out.println("bike breake apply manually");
	}
	
}//end here bikr

class car extends Vehicle{
	      void Brake() {
	    	            System.out.println("car break applid with Abs ");
	      }//end here car
	
	
}//end here car class 

class Truck extends Vehicle{
	       void Brake() {
	    	System.out.println("truck applid  brake applied with air pressur");   
	       }
}//end here 



 class Test {

	public static void main(String[] args) {
		
            		Vehicle v1;
            		
            		v1 = new bike();
            		v1.Brake();
            		System.out.println();
            		v1 = new car();
            		v1.Brake();
            		System.out.println();
            		v1 = new Truck();
            		v1.Brake();
            		
		

	}

}
