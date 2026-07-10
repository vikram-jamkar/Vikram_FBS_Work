//Date (date, month, year)

struct Date
{
    int date;
    int month;
    int year;

};
#include<stdio.h>
void main(){
struct Date d1;

 printf("Enter date: ");
    scanf("%d", &d1.date);

    printf("Enter month: ");
    scanf("%d", &d1.month);

    printf("Enter year: ");
    scanf("%d", &d1.year);

    printf("Date: %02d/%02d/%d",d1.date,d1.month,d1.year);

}

