package p3;

import p1.*;
import p2.Admin;
import p2.HR;
import p2.saleManger;

public class Test {
	public static void main(String[] args) {
	//	\*Employee e1;
		//e1 = new Employee(102,"vikram",700); 
		//e1.display();
	//	System.out.println();
		
		
		HR h1;
		h1 = new HR(102,"sachin",3000,700);
		h1.display();
		System.out.println("______________________________");
		
		
		saleManger s1;
		s1 =new saleManger(103,"virat",9000,50,500);
		s1.display();
		System.out.println("-------------------------------------");
		
		Admin a1;
		a1 = new Admin(104,"Dhoni",10000,5000);
		a1.display();
		
		
		
		
	}

}
