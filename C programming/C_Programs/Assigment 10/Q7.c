//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.
void operator(int* num1, int*num2 ,char*op);
#include <stdio.h>
void main(){
            int num1;
            int num2;
            char op;
         
            printf("Enter the num1");
            scanf("%d",&num1);

            printf("Enter the number");
            scanf("%d",&num2);

            printf("use opretar");
            scanf(" %c",&op);
            operator(&num1 ,&num2 ,&op);
           

}

void operator(int* num1, int*num2 ,char*op){
      if(*op=='+')
             {
              printf("%d",*num1+*num2);
             }else if(*op=='-')
             {
                printf("%d",*num1- *num2);
             }else if(*op=='*')
             {
                printf("%d",(*num1)*(*num2));
             }else if(*op=='/')
             {
                printf("%d",*num1/ *num2);
             }else if(*op=='%')
             {
                printf("%d",*num1% *num2);
             }else {
                printf("Invalid opretars");
             }

}