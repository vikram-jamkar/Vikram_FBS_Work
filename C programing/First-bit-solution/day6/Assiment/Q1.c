#include <stdio.h>
void main (){
int num1, num2;
char op;     
         // user first input number 
         printf("Enter the first  number: ");
         scanf(" %d",&num1);

         //user seconde input 
         printf("Enter the second numer:");
         scanf("%d",&num2);
           fflush(stdin);
         printf("Enter the opreter (+, -, * ,/, %%)");
         
         scanf(" %c",& op);
         
          if (op== '+')
          {
            printf("Result: %d :",num1 + num2);
          }else if (op =='-')
          {
                  printf("Result: %d",num1 - num2);

          }
          
          else if (op == '*')

          {
            printf("Result: %d",num1*num2);
          }
          
          else if (op == '/')
             
          
          
          if (num2 !=0)
          
              printf("Result %d",num1 / num2);

            else   printf("Error: Division by zero\n");

           if (op == '%')

          if  (num2 !=0)
            printf("Result: %d",num1 % num2);
        
           else   printf("Error: Modulo by zero");
           else {
        printf("Invalid operator\n");
    }}
        
          





