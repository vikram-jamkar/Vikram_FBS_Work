package p2;
import p1.Travaller;
import p1.Product;
public class Car implements Travaller,Product{

	@Override
	public void travel() {
		// TODO Auto-generated method stub
		System.out.println("Traveling car");
	}

	@Override
	public void sell() {
		// TODO Auto-generated method stub
		System.out.println("selling the car");
	}

	@Override
	public void buy() {
		// TODO Auto-generated method stub
		System.out.println("buyeing the  car");
	}

}
