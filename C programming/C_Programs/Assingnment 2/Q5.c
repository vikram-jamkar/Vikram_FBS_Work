/*5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
is a student and he has purchased more than 500 than discount is 20% otherwise
discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount.*/
#include <stdio.h>
void main(){
            double price;
            char choice;

            printf("Enter the price");
            scanf("%lf",&price);

            printf("Enter choice  say  y or n ");
            scanf(" %c",&choice);
            double total;
            if(choice == 'y')
            {
                if (price > 500)
                {
                  total = price - price *0.20;  
                }else{
                    total=price-price*0.10;
                }
                

            }
            else{

                if(price > 600){
                    total = price -price *0.15;

                }else{
                    
                    total=price;
                    printf("not discount");}
            }
            printf("Final Price = %.2lf", total);
}    