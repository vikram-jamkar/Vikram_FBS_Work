//1 Print numbers from 1 to 10
//Output: 1 2 3 4 5 6 7 8 9 10
 void table(int* num1);
#include<stdio.h>
void main()
{
    int num1 = 1;
   table(&num1);
}

   void table(int* num1){
 while(*num1 <=10){

        printf("%d ",*num1);
        
        (*num1)++;
    }}