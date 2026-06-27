/*5 Check the given number is Armstrong number or not..
Input: n = 153
Output: Armstrong
*/
void Amstorng();//funtion  defination
#include<stdio.h>
 void main(){
    Amstorng(); //funtion call


}

void Amstorng(){//funtion decleretion
      int n =153;
    int sum =0 ,rem;
    int temp =n;
     while (temp>0){
         rem = temp %10;
         sum = sum + (rem * rem * rem);
         temp =temp/10;
        
     }
     if (sum==n)
     {
        printf("Amstrong number ");

     }else{
        printf("not amstorng number");
     }
     
}