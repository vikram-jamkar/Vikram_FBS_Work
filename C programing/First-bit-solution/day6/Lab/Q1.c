#include <stdio.h>
void main(){

    int mark;

    //asak user input
    printf("Enter the mark");
    scanf("%d",&mark);
    // grade cheak karna
    if (mark >= 90 && mark<=100){
        printf("grade A+\n");
    }
    else if(mark >=75 && mark<90)
    {
           printf("grade B+ \n");
        }

           else if(mark >= 60 && mark < 75)
           {
             printf("grade C+\n");
           } else if (mark >= 40 && mark < 60)
           {
            printf("grade C \n ");
           } else if (mark >= 0 && mark < 40){
            printf("Grade: Fail\n");

           }else{
              printf("Invalid marks! Please enter between 0 to 100.\n");
           }


}