/*7 Find factorial of given number.
Input: n = 5
Output: 120*/
#include<stdio.h>
void  main(){
    int n=5;
    int fact =1;
    int i =1;

    while(i <=n){
        fact =fact * i;
        i++;
    }
    printf("%d",fact);
}