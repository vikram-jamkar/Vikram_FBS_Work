package p2;

import p1.Employee;

public class HR extends Employee{
                              	 double commissionRate;

	                     public HR() {
	                    	 super();
	                    	 this.commissionRate =500;
	                    	 
	                    	        
						
	                    	 
	                    	 
	                    	 
						}

	                     
	                     
	                     
	                     
						 public HR(int id, String name, double salary,double commissionRate) {
							super(id ,name,salary);
							this.commissionRate = commissionRate;
						 }





						 public double getCommissionRate() {
							 return commissionRate;
						 }





						 public void setCommissionRate(double commissionRate) {
							 this.commissionRate = commissionRate;
						 }
	
	                    public void display() {
	                    	super.display();
	                    	System.out.println("commissionRate:"+commissionRate);
	                    }
	
	
	
	
                 
}
