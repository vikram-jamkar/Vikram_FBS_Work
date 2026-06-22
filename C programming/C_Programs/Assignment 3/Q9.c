/*9 Check the given number is Palindrome number or not.
Input: n = 121
Output: Palindrome*/
#include <stdio.h>
void main(){
            int n =121;
          int  temp =n;
            int r1;
            int rev=0;
            while (temp !=0)
            {
                  r1 =temp %10;
                  rev = rev * 10 + r1 ; 
                 temp = temp / 10;
                     
            }
             if (rev == n)
        printf("Palindrome");
    else
        printf("Not Palindrome");
            
    
}