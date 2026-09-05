
public class Test {

	public static void main(String[] args) {
		
		int a = 10;
		int b = 2;
		
		
		
		try {
			
			String Fname = args[0];
			String Lname = args[1];
			
			System.out.println("name is "+Fname+" "+Lname);
			
			int c = a/b;
			System.out.println("Answer :"+c);
		}
		catch(ArithmeticException ae){
			System.out.println("can not be divde by zero");
		}catch(ArrayIndexOutOfBoundsException aie) {
			 System.out.println("Please enter two names");
		}
		catch(RuntimeException re) {
			System.out.println("Some runtime error occurred");
		}catch (Exception e) {
		    System.out.println("Some exception occurred");
		}
			

	}

}
