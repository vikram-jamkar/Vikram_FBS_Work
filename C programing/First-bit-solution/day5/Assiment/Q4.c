#include  <stdio.h>
void main (){
    int year;
      // aaskk user year

       printf("Enter the year");

     scanf("%d",&year); 

     // leep year condition
     if(year % 4 == 0 && year % 100!=0 || year % 400 == 0)
     {
        printf("%d is a leep year",year);
     }
     else
     {
         printf("%d is not leep year",year);
     }
}
     