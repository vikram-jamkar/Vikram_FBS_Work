//5. Write a C program to input five numbers and find their average
#include <stdio.h>
int main(){
           int n1,n2,n3,n4,n5,sum,average;
           printf("Enter the five number: \n");
           scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);

         sum = n1+n2+n3+n4+n5;
         average = sum/5;

         printf("average of : %d",average);


}