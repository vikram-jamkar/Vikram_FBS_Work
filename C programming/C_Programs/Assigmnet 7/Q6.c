/*8 Check the given number is Strong number or not.
Input: n = 145
Output: Strong*/
int strong();
#include<stdio.h>
void main(){

       if (strong())
       {
        printf("Storng");
       }else{printf("number not strong");}
         
}


int strong(){
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
       return 1;

    }
    else
    {
        return 0;

    }}




