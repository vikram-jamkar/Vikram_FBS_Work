package com.phonix.demo;


import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.stream.Collectors;




public class MainApp {

	public static void main(String[] args) {
		
		List<Student> allStudents=new ArrayList<>();
		
		allStudents.add(new Student(1,"vikram",95,"m"));
		allStudents.add(new Student(2,"ramraj",85,"m"));
		allStudents.add(new Student(3,"viraj",90,"m"));
		
          //itration
	    	// forEach
		
		//allStudents.stream().forEach(ref -> System.out.println(ref.getStudentName()));//terminal opretion
	    
		//filtering
		//allStudents.stream().filter(ref->ref.getMarks()>90).forEach(ref->System.out.println(ref.getStudentName()));
		
		//pipline
		/*double averageMarks = allStudents.stream()
                .filter(ref -> ref.getGender().equals("m"))
                .mapToDouble(ref -> ref.getMarks())
                .average()
                .orElse(0.0);

System.out.println(averageMarks);*/
	//}






	

	
		Map<String, List<Student>> byName =
		        allStudents.stream()
		        .collect(Collectors.groupingBy(Student::getStudentName));
 
	
	HashMap<String, List<Student>> filteredData = new HashMap<>();

	List<Student> temp = new ArrayList<>();

	for (Student p : allStudents) {
	    
	    String name = p.getStudentName();
	    
	    temp.add(p);
	    
	    Set<String> keys = filteredData.keySet();
	    
	    for (String key : keys) {
	        
	        if (name.equals(key)) {
	            
	            List<Student> intermediate = filteredData.get(key);
	            
	            intermediate.add(p);
	            
	            filteredData.put(key, intermediate);
	        }
	    }
	    
	    filteredData.put(name, temp);
	}

}
}