class Employee {
    int id;
    String name;
    double salary;
    static int empcount;

    
    double calsal() {
    	return salary;
    }
    
    
    static {
        empcount = 0;
    }

    Employee() {
        this.id = 1;
        this.name = "unkow";
        this.salary = 3000;
        this.empcount++;
    }

    Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
        this.empcount++;
    }

    int getId() {
        return id;
    }

    void setId(int id) {
        this.id = id;
    }

    String getName() {
        return name;
    }

    void setName(String name) {
        this.name = name;
    }

    double getSalary() {
        return salary;
    }

    void setSalary(double salary) {
        this.salary = salary;
    }

    static int getEmpcount() {
        return empcount;
    }

    static void setEmpcount(int empcount) {
        Employee.empcount = empcount;
    }

    void display() {
        System.out.println("Id: " + id);
        System.out.println("Name: " + name);
        System.out.println("Salary: " + salary);
    }
}// end here emp class

class HR extends Employee {
    double commissionRate;
    double calsal() {
    	return salary + commissionRate;
    }
    HR() {
        super();
        this.commissionRate = 5000;
    }

    HR(int id, String name, double salary, double commissionRate) {
        super(id, name, salary);
        this.commissionRate = commissionRate;
    }

    double getCommissionRate() {
        return commissionRate;
    }

    void setCommissionRate(double commissionRate) {
        this.commissionRate = commissionRate;
    }

    void display() {
        super.display();
        System.out.println("commissionRate " + commissionRate);
    }
}// end here hr

class SalesManager extends Employee {
    double target;
    double incentive;
    
    double calsal() {
    	return salary+incentive;
    }

    SalesManager() {
        super();
        this.target = 50;
        this.incentive = 500;
    }

    SalesManager(int id, String name, double salary, double target, double incentive) {
        super(id, name, salary);
        this.target = target;
        this.incentive = incentive;
    }

    double getTarget() {
        return target;
    }

    void setTarget(double target) {
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
        System.out.println("incentive " + incentive);
        System.out.println("target " + target);
    }
}// end here salemanager

class Admin extends Employee {
    double adminAllowance;
    double calsal() {
    	return salary+adminAllowance;
    }

    Admin() {
        super();
        this.adminAllowance = 500;
    }

    Admin(int id, String name, double salary, double adminAllowance) {
        super(id, name, salary);
        this.adminAllowance = adminAllowance;
    }

    double getAdminAllowance() {
        return adminAllowance;
    }

    void setAdminAllowance(double adminAllowance) {
        this.adminAllowance = adminAllowance;
    }

    void display() {
        super.display();
        System.out.println("adminAllowance " + adminAllowance);
    }
}// end here admin  

public class Test {
    public static void main(String[] args) {

        Employee e1;

        e1 = new Employee(101,"sachin",20000);
        e1.display();
        System.out.println("total:"+e1.calsal());
        System.out.println("------------------------");

        e1 = new HR(102,"virat",20000,800);
        e1.display();
        System.out.println("total:"+e1.calsal());
        System.out.println("---------------------");

        e1 = new SalesManager(103,"rahul",20000,40,5000);
        e1.display();
        System.out.println("total:"+e1.calsal());
        System.out.println("------------------");
        e1 = new Admin(104,"hardik",2000,700);
        e1.display();
        System.out.println("total:"+e1.calsal());
      
   }
}
