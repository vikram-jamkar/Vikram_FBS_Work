package p3;
import p1.Employee;
import p2.Admin;
import p2.HR;
import p2.saleManger;

public class Test {
	public static void main(String[] args) {
	       Employee e1;
		//e1 = new Employee(); 
		//e1.display();
	//	System.out.println();
		
		
	
		e1 = new HR(102,"sachin",3000,700);
		e1.display();
		System.out.println("______________________________");
		
		
		
		e1 =new saleManger(103,"virat",9000,50,500);
		e1.display();
		System.out.println("-------------------------------------");
		
		
		e1 = new Admin(104,"Dhoni",10000,5000);
		e1.display();
		
		
		
		
	}

}
