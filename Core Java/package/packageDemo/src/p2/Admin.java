package p2;

import p1.Employee;

public class Admin extends Employee{
	 double adminAllowance;
	 
	 public Admin() {
		 super();
		// TODO Auto-generated constructor stub
		 this.adminAllowance = 5000;
	
	 }

	 public Admin(int id ,String name,double salary,double adminAllowance) {
		super(id,name,salary);
		this.adminAllowance = adminAllowance;
	 }

	 public double getAdminAllowance() {
		 return adminAllowance;
	 }

	 public void setAdminAllowance(double adminAllowance) {
		 this.adminAllowance = adminAllowance;
	 }
	 
	 public void display() {
	       super.display();
		              System.out.println("adminAllowance"+adminAllowance);
	 }

}
