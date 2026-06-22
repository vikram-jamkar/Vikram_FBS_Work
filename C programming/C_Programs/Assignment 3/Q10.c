/*10 Find Sum of first and last digit of given number.
Input: n = 12345
Output: 6 (1 + 5)*/
#include<stdio.h>
void main(){

           int n = 12345;
            int temp =n;
            int fd;
            int sum=0;

           int ld = temp %10;
            while (temp > 0)
            {
                fd=temp%10;

                 temp=temp/10;
            }
                 sum=fd +ld;
             printf("%d +%d=%d",fd,ld,sum);

}