#include <stdio.h>
//10. Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage.
void main(){
    float sub1,sub2,sub3,sub4,sub5;
    float total , parcentege;

    //user input marks
    printf("Enter the mark sub1");
    scanf("%2f",&sub1);

     printf("Enter the mark sub2");
  scanf("%2f",&sub2);
      printf("Enter the mark sub3");
  scanf("%2f",&sub3);
       printf("enter the sub 4");
  scanf("%2f",&sub4);
        printf("enter the sub 5");
          scanf("%2f",&sub5);

          //calculeton 


          total = sub1 + sub2 + sub3  + sub4 + sub5;


          parcentege = (total/500)*100;


          printf("Total = %2lf",total);
          printf("parcenteg = %2lf",parcentege);

}