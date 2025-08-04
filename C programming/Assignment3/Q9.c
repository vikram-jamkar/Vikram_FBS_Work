#include <stdio.h>
void main (){
    int n = 145;
    int temp = n;
    int digit, sum = 0;
    
    
        //145 > 0
    while (temp > 0){
      // 5 =145 % 10
      int fact = 1;
      int i =1;
digit = temp %  10;
           //1 <= 541
    while (i <= digit)
    {       //1=1*1
               // 1=1*2 = 2//
               //   1 * 3 =6//
               //   1 * 4= 12

        fact = fact * i;
        i++;
    }
    sum = sum + fact;
    temp = temp /10;
    
        
    } 
      
if (sum == n)
    printf("Strong\n");
else
    printf("Not Strong\n");}