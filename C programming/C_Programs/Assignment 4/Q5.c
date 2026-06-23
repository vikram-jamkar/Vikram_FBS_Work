/*5 Check the given number is Armstrong number or not..
Input: n = 153
Output: Armstrong*/

#include<stdio.h>
void main(){
            int n =153;
           
            int rem;
            int sum =0;

            for (int temp = n; temp !=0;  temp = temp/10)
            {
                      rem = temp %10;
                      sum= sum + rem *rem *rem;
            }if (sum==n)
            {
               printf("Amstorg");
            }else{printf("not Amsotrong");}
            
            
}