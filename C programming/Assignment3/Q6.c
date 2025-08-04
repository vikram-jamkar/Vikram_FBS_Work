#include <stdio.h>
void main (){
    int n = 153;
    int oringnal = n ;
    int sum = 0;
    int digit;

    while (n > 0)
    {
        digit = n % 10;
     sum = sum + digit * digit * digit ;

     n = n/10;
        
    }
    if(sum == oringnal)
        printf("Amstrong ");

        else
        printf("Not Amstrong");

    }
    
