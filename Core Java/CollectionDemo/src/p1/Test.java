package p1;

import java.util.ArrayList;
import java.util.TreeSet;

class Student implements Comparable <Student> {
    int roll;
    double marks;
    String name;

    @Override
   public int compareTo(Student o) {
    	System.out.println("inse cpmarae");
        Student s1 = (Student)o;
        return s1.roll-this.roll;
    }

    public Student() {
        this.roll = 47;
        this.marks = 7;
        this.name = "unknown";
    }

    public Student(int roll, double marks, String name) {
        this.roll = roll;
        this.marks = marks;
        this.name = name;
    }

    public int getRoll() {
        return roll;
    }
    public void setRoll(int roll) {
        this.roll = roll;
    }
    public double getMarks() {
        return marks;
    }
    public void setMarks(double marks) {
        this.marks = marks;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }

	@Override
	public String toString() {
		return "\nStudent roll=" + roll + ", marks=" + marks + ", name=" + name ;
	}

	@Override
	public boolean equals(Object obj) {
		// TODO Auto-generated method stub
		     Student  a1= (Student)obj;
		if(this.roll == a1.roll) {
			return true;
			
		}else {
			return false;
		}
	}
	
	
    
}

public class Test {
	 public static void main(String[] args) {
	        ArrayList<Student> a1  = new ArrayList<Student>();
	        a1.add(new Student(57, 45, "Sachin"));
	        a1.add(new Student(34, 509, "Rahul"));
	        a1.add(new Student(88, 700, "Dhoni"));
	       
	        System.out.println(a1);
	        if(a1.contains(new Student(34, 509, "Rahul"))) 
	        {
	        	System.out.println("Fount");
	        }else {
	        	System.out.println("Not Fonud");
	        }
	 
	 }
	
	
	
	
    public static void main1(String[] args) {
        TreeSet<Student> t1  = new TreeSet<Student>();
        t1.add(new Student(57, 45, "Sachin"));
        t1.add(new Student(34, 509, "Rahul"));
        t1.add(new Student(88, 700, "Dhoni"));
        

        System.out.println(t1);
        
        if(t1.contains(new Student(34, 509, "Rahul"))) 
        {
        	System.out.println("Fount");
        }else {
        	System.out.println("Not Fonud");
        }
    }
}
