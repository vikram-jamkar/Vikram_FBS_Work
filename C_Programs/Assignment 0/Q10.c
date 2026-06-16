//10. Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage.
#include<stdio.h>
int main(){
           float sub1, sub2,sub3,sub4,sub5 ,total,percentage;

            printf("Enter the sub1 marks :");
            scanf("%f",&sub1);

            printf("Enter the sub2 marks :");
            scanf("%f",&sub2);

            printf("Enter the sub3 marks :");
            scanf("%f",&sub3);
 
            printf("Enter the sub4 marks :");
            scanf("%f",&sub4);

            printf("Enter the sub5 marks :");
            scanf("%f",&sub5);
         
            total = sub1 + sub2 + sub3 + sub4 + sub5;
            percentage = (total * 100 )/500;

            printf("percentage is %.2f",percentage);

            return 0;


}