//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.
void claculation();//funtion defination
#include <stdio.h>
void main(){
           claculation();//funtion call

}

  void claculation(){//funtion decleretion 
    int num1;
            int num2;
            char op;

            printf("Enter the num1\n");
            scanf("%d",&num1);

            printf("Enter the num2\n");
            scanf("%d",&num2);

            printf("use opretar");
            scanf(" %c",&op);

             if(op=='+')
             {
              printf("%d",num1+num2);
             }else if(op=='-')
             {
                printf("%d",num1-num2);
             }else if(op=='*')
             {
                printf("%d",num1*num2);
             }else if(op=='/')
             {
                printf("%d",num1/num2);
             }else if(op=='%')
             {
                printf("%d",num1%num2);
             }else {
                printf("Invalid opretars");
             }
 }