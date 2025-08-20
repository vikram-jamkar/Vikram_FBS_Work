#include <stdio.h>
//6. Date (date, month, year)
     struct Date
{
 int date;
 int month;
 int year;

};

void main (){
    struct Date d1;
      
     printf("Enter date (1-31)",d1.date);
     scanf("%d",&d1.date);

     printf("Enter month (1-12)",d1.month);
     scanf("%d",&d1.month);

     printf("Enter year");
     scanf ("%d",&d1.year);

/////output

printf("Date");
printf("\n Enterd date is :%d-%d-%d",d1.date,d1.month,d1.year);


}