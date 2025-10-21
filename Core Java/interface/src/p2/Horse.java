package p2;
import p1.Product;
import p1.Travaller;
public class Horse  implements Product,Travaller{

	

	@Override
	public void sell() {
		// TODO Auto-generated method stub
		System.out.println("selling the horse");
	}

	@Override
	public void buy() {
		// TODO Auto-generated method stub
		System.out.println("buying the horse");
	}

	@Override
	public void travel() {
		// TODO Auto-generated method stub
		System.out.println("traveling  buy horse");
	}

}
