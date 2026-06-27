/*4 Check the given number is prime or not.
Input: n = 7
Output: Prime*/
     void  prime(); 
#include<stdio.h>
void main(){
      prime();

            

}

void prime(){
    int n= 8;
            int i =2;
            int flaf = 0;
            while(i<n){
               if (n%i==0)
               {     flaf=1;
                 printf("not prime");
                 break;

               }
               i++;
            }
               if (flaf==0)
               {
                printf("prime number");
               }
               
}