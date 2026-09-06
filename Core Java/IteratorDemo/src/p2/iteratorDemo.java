package p2;

import java.util.ArrayList;
import java.util.Iterator;

public class iteratorDemo {

	public static void main(String[] args) {
		
		
		ArrayList<String> cities = new ArrayList<>();
		cities.add("pune");
		cities.add("mumbai");
		cities.add("solapur");
		cities.add("parbhani");
		
		//for(String city : cities) 
		//{
		//	if(city.equals("mumbai")) {
		//cities.remove("mumbai");
		//	}
		//}
	
		Iterator<String> myit = cities.iterator();
          while(myit.hasNext())
          {
        	  String city=(String) myit.next();
        	  if(city.equals("pune"))
        	  myit.remove();
        	  
          }
          System.out.println(cities);
         
	}

}
