class SearchNumber{
                   public static void main(String[] args){
                   int [] arr = {2,5,8,10,3,8}; //example array
                   int NumberToSearch = 8;
                   boolean found = false; 
                   
                   for(int i = 0; i < arr.length;i++){
                   if(arr[i]==NumberToSearch){
                   found = true;
                   System. out.println(NumberToSearch +"found at index"+ i); 
                   break;
                
 }//end if here
}//end for here

  if(!found){
   System.out. println(NumberToSearch +"not found in this array");

}

}//end main here    
         
}//end class here 