/*6 Check the given number is Perfect number or not.
Input: n = 28
Output: Perfect*/
#include<stdio.h>
void main(){
    int n = 28;
    int sum = 1;
    for (int i = 1; i < n; i++)
    {
        if (n% i==0)
        {
            sum =sum+i;
        }
        
    }
    if(sum == n)
        printf("Perfect");
    else
        printf("Not Perfect");

}