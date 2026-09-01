package p1;

  public class A {
  public void myFun() {
	System.out.println("inside class");
}
}


class B extends A{
	
	void myFunB() {
		A ref = new A();
		ref.myFun();
	}
}



class C{
	
	void myFunC() {
		A ref = new A();
		ref.myFun();
}}