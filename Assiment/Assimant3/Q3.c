#include <stdio.h>
void main () {
    /*Sum of numbers in given range.
Find sum of numbers from start to end.
Input: start = 1, end = 5
Output: 15*/
    int start = 1;
    int end = 5 ;
    int sum = 0;
     while (start <= end)
     {      //1       5
      //  sum += start;
      sum = sum + start;
     //0 1  =  01 +   1
     
     //3 =    1   +  2
     //6 = 3  +    3
     //10 = 6   +  4
     //   15 =  10    +  5
         start++;
     }
     
     printf("%d",sum);
}