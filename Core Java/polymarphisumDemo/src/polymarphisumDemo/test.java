package polymarphisumDemo;

class Emp {
    int id;
    String name;
    double salary;
// Default Constructor
Emp() {id = 1;
name = "vikram";
salary = 200.0;
}         // Parameterized Constructor
Emp(int id, String name, double salary) {
this.id = id;
this.name = name;
this.salary = salary;
}
void setid(int id){
this.id=id;}
void setname(String name){
this.name=name;}
void setsalary(double salary){
this.salary=salary;}
  
void display(){
System.out.println("id :"+ id);
System.out.println("name: "+ name);
System.out.println("salary: "+ salary); }  
} //end class student and class members

class  Admin extends Emp{//steps 1 is - a relation
	          double allowances; 
	          
	          
	               Admin() {
	            	   super();//2 a 
			        this.allowances=400;
		                   }


				   Admin(int id, String name, double salary ,double allowances) {
					super(id,name,salary);//referance 2b
					this.allowances = allowances;
				   }


				   double getAllowances() {
					   return allowances;
				   }


				   void setAllowances(double allowances) {
					   this.allowances = allowances;
				   }
				   
	             void display() {
	            	 super.display();//steps 4
	            	 System.out.println("allowances:"+this.allowances);
	             }
	
	
}  

class Hr extends Emp{ // is_a stpes 1 
	     double commission;
	     
 
	           Hr() {
	    	   super(); //steps 3a
		       this.commission=500;
		       }


			   Hr(int id, String name, double salary, double commission) {
				super(id, name, salary);//steps 2 b 
				this.commission=commission;
			   }


			   double getCommission() {
				   return commission;
			   }


			   void setCommission(double commission) {
				   this.commission = commission;
			   }
	           
			   void display() {
				   super.display();
				   System.out.println("commission"+this.commission);
			   }
	     
}

class saleManger extends Emp{
	             int target;
	             double incentive;
	             
 saleManger() {
	super();//step 2A
	this.target=500;
	this.incentive=5000;
}

 saleManger(int id, String name, double salary ,int target, double incentive) {
	 super(id, name, salary); //stpes 2 b 
	this.target = target;
	this.incentive = incentive;
 }

 int getTarget() {
	return target;
 }

 void setTarget(int target) {
	this.target = target;
 }

 double getIncentive() {
	return incentive;
 }

 void setIncentive(double incentive) {
	this.incentive = incentive;
 }	             
	
 void display() {
	 super.display();
	 System.out.println("incentive :"+incentive);
	 System.out.println("target:"+this.target);
 }
 
 
 
}//end here class salemanager

class test{
     public static void main(String [] args){
      Emp e1 = new Emp();
      e1.display();
      System.out.println();
      e1 = new Admin(101,"ma,e" ,50000,500);//upcating
      e1.display();
      System.out.println();
    
      e1 = new Hr();//upcating
      e1.display();
      System.out.println();
      
      e1 = new saleManger(103,"rahul",4000,500,50);//upcating
      e1.display();
}//end here main




}//end class test
