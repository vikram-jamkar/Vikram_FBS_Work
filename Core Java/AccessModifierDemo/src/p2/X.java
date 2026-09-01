package p2;
import p1.A;
class X {
void myFun() {
	A ref = new A();
	ref.myFun();
}
}


class Y extends A{
	
	void myFuny() {
	A ref = new A();
	ref.myFun();
	}
	
}
