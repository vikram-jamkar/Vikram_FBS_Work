#include <stdio.h>
/*5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
is a student and he has purchased more than 500 than discount is 20% otherwise
discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount.*/
void main (){
    float price,discount,finalAmount;
    char student;
    
     //input lena 
     printf("Enter price");
     scanf("%f", &price);

     printf("are you student (y-n)");
     scanf(" %c", &student);


     //logic

     if (student == 'y' || student == 'Y') 
     { if (price > 500)
     {
        discount = price * 0.20;
     }else {
         discount = price * 0.10;
     }  
     }else {
        //not student 
        if (price > 600)
        {
          discount = price*0.15;
        }else{
            discount = 0;

        }
    }       finalAmount =   price - discount;
             printf("%f",finalAmount);
     



}