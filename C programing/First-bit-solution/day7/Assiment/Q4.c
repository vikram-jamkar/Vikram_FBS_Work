#include <stdio.h>
void main (){

    int n =7;
    int i= 2;
    int isprime = 1;

    while (i < n)
    {
        if (n % i == 0 )
        {
            isprime = 0 ;
            break;
        }
        i++;
    }
    
    

    if (isprime)
    {
        printf(" prime");
    }
    else{
        printf(" Not prime");
    }
}