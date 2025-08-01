#include <stdio.h>
//Q 5 Write a C program to input five numbers and find their average.
void main (){

    int num1,num2,num3,num4,num5;
    float average;

    //user input5
    printf("Enter the 5 valu :=");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);

   average = (num1 + num2 + num3 + num4 + num5)/5.0; 

   printf("Avreage := %2f\n",average);
}