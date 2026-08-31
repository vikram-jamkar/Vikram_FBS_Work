package p1;
class VoterAgeException extends Exception{
	
	@Override
		public String toString() {
			// TODO Auto-generated method stub
			return "Invalid Age!!";
		}
	}

class Voter{
	        int age ;
	        
	       public Voter(int age ) {
			// TODO Auto-generated constructor stub
		
	             this.age=age;
	       }
	       public void validate()
	       {
	    	  try {  
	       
	                if (this.age<18) 
	                 {
	    	            throw new VoterAgeException();
	    	   
	                  }
	                  else 
	                   {
	    	             System.out.println("yes you can vote !");
	                   }
	                }
	            	catch(VoterAgeException ve){
	            		
	            		System.out.println(ve);
	    	   
	                }
	       
	               }  //validate end here      
	       	       
}//voter class end herr
	       


public class TestException {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
             Voter v1 = new Voter(14);
             v1.validate();
	}

}
