/*3 Sum of numbers in given range.
Find sum of numbers from start to end.
Input: start = 1, end = 5
Output: 15*/
void range(int start ,int end,int sum);//funtion decleretion
#include<stdio.h>
void main(){
    int start = 1;
    int end =5;
    int sum=0;

range(start,end,sum);//funtion call
   
}

void range(int start ,int end,int sum){ //funtion delcleretion
    while (start<=end)
    {
         sum = sum + start ;
          
     start++;
    }
    printf("%d",sum);}