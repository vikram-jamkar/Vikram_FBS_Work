#include <stdio.h>
/*1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations.*/
void main (){
    double num1,num2,result;
    char op;

            //input lena

        printf("Enter the first number=");
        scanf("%lf",&num1);

        printf("Enter an operator (+, -, *, /, %%): ");
         scanf(" %c", &op); 

        printf("Enter the second number");
        scanf("%lf",&num2);
           

        //logic 

        if ( op == '+')
        {
          result =num1+num2;
          printf("%.2lf+%.2lf = %.2lf",num1,num2,result);
        } else if (op == '-' )
        {
          result = num1+num2;
          printf("%.2lf+%.2lf = %.2lf",num1,num2,result);
        }else if (op == '*' )
        {
            result = num1*num2;
            printf("%.2lf*%.2lf = %.2lf",num1,num2,result);
        } else if ( op == '/')
        {
            if (num2 !=0)
            {
               result = num1 / num2;
               printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }else{
                 printf("Error: Division by zero is not allowed\n");
            }
            
        }else if(op =='%'){
            int   res= (int)num1%(int)num2;
            printf("%d %% %d = %d\n",(int)num1, (int)num2, res);
        }else{
            printf("Invalid operator\n");
        }
        
        
        

        
        
    }