
class Worker extends Thread{
	
	
	@Override
		public void run() {
		
			String alphabate ="123456878977";
			
		for (int i = 0; i < alphabate.length(); i++) {
			System.out.print(alphabate.charAt(i));
			
		}
		}

public class DemoThred {

	public static void main(String[] args) {
		String alphabate ="abcdifgdssnnkn";
		
		Worker w1 = new Worker();
		w1.start();
         //w1.run();		
		
	for (int i = 0; i < alphabate.length(); i++) {
		System.out.print(alphabate.charAt(i));
		
	}
	
	
}}}
