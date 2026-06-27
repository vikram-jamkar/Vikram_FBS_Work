/*4 Check the given number is prime or not.
Input: n = 7
Output: Prime
*/
void prime();
#include<stdio.h>
void main (){
    prime();

    
}



void prime(){ int n = 7 ;
    int falg = 0;

    for (int i = 2; i <n; i++)
    {
           if (n%i==0)
           {
            falg =1;
           }
                 
    }if(falg==0){
        printf("prime");
    }else{printf("not prime");}
    }