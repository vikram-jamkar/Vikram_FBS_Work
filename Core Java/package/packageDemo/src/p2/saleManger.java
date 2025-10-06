package p2;

import p1.Employee;

public class saleManger  extends Employee{
	double target;
    double incentive;
    
    
	public saleManger() {
		super();
		this.target = 50;
		this.incentive = 700;
		
	}


	public saleManger(int id , String name,double salary,double target, double incentive) {
		super(id ,name,salary);
		this.target = target;
		this.incentive = incentive;
	}


	public double getTarget() {
		return target;
	}


	public void setTarget(double target) {
		this.target = target;
	}


	public double getIncentive() {
		return incentive;
	}


	public void setIncentive(double incentive) {
		this.incentive = incentive;
	}
	
	
	public void display() {
		super.display();
		System.out.println("target"+target);
		System.out.println(" incentive"+ incentive);
	}
	

}
