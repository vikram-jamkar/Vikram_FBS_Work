package HashSet;

import java.util.HashSet;






class Student {
    int roll;
    double marks;
    String name;
    
    public int hashCode() {
        System.out.println("inside hashCode");
        return this.roll;
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
	}}
public class Test {
                   public static void main(String [] args){
                	   
                	   HashSet<Student> a1 = new HashSet<>();
                	   a1.add(new Student(57,450,"sachin"));
                	   a1.add(new Student(34,590,"virat"));
                	   a1.add(new Student(88,700,"Dhoni"));
                	   a1.add(new Student(88,700,"Dhoni"));//not allw dulpicate
                	   a1.add(new Student(58,300,"Rahul"));
                	   
                	   System.out.println(a1);
                	   if(a1.contains(new Student(34, 509, "Rahul"))) 
                       {
                       	System.out.println("Fount");
                       }else {
                       	System.out.println("Not Fonud");
                       }
                   }
}
