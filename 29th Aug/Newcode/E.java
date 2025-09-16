class E{
public static void main (String[] arrgs){

int n ,digit ,temp,sum =0;

n = 153;
temp = n;


while(temp!=0){
      
        digit  =temp %10;
   
           sum = sum + ( digit* digit* digit);
            temp  = temp / 10;
 


}  
if(sum ==n){
System.out.printf("%d is an Armstrong number", n);

}else 
 System.out.printf("%d is not an Armstrong number", n);

}}