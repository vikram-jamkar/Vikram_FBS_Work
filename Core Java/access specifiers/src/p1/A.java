package p1;



public class A {

	public void  myFunA() {
		System.out.println("");
	}
}


class B extends A{
	
          void myFunB() {
		A ref = new A();
		ref.myFunA();
		
	}
	
	
	
}

class C extends A{
	               void myFunC() {
	              A ref =  new A ();
	              ref.myFunA();
	                      
	              }
}