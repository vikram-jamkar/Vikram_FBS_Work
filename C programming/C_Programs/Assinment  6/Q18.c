/*8 Check the given number is Strong number or not.
Input: n = 145
Output: Strong*/
void strong();
#include<stdio.h>
void main(){
             strong ();
           
}


void strong(){
    int n =145;
           int rem;
           int sum=0;
            int temp =n;
           while (temp!=0)
           {
                  rem=temp%10;
                  int fact=1;
           
           
            
            while(rem >= 1){
                fact = fact *rem;
                rem--;
            }
              sum = sum + fact; 
            temp = temp / 10;

} if(sum == n)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not Strong Number");
    }}