package Exception;



public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
          int a =5;
          int b = 2;
          int c;
          try {
        	  String fname = args[0];
        	  String lname = args[1];
        	  
        	  System.out.println("name is " + fname +" " + lname);
        	  c = a/b;
        	  System.out.println("Anser is c " + c );
        			  
          }catch (ArithmeticException as) 
          {
        	  System.out.println("please second valu 0 mat dena ");
          }catch(ArrayIndexOutOfBoundsException ar) {
          System.out.println("please provid at leatst tow arguments from console");
          }
		   catch (Exception e) {
			   System.out.println("some problem occured ");
		   }
		
		
	}

}
