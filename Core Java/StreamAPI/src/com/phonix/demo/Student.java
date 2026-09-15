package com.phonix.demo;

public class Student {
	
	
	int rollNo;
	String StudentName;
	float marks;
	String gender;
	
	
	public Student() {
		// TODO Auto-generated constructor stub
	}
	
	public Student (int v1,String v2,float v3,String v4) 
	{
		this.rollNo=v1;
		this.StudentName=v2;
		this.marks=v3;
		this.gender=v4;
		
		
	}

	public int getRollNo() {
		return rollNo;
	}

	public void setRollNo(int rollNo) {
		this.rollNo = rollNo;
	}

	public String getStudentName() {
		return StudentName;
	}

	public void setStudentName(String studentName) {
		StudentName = studentName;
	}

	public float getMarks() {
		return marks;
	}

	public void setMarks(float marks) {
		this.marks = marks;
	}

	public String getGender() {
		return gender;
	}

	public void setGender(String gender) {
		this.gender = gender;
	}
	

}
