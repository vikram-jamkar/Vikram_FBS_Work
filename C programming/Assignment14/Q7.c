#include<stdio.h>
//7. Time (hour, min, sec)

struct
Time
{
   
    int hr;
    int min;
    int sec;

};

 void main (){
    struct Time T1;

    printf("Enter hr(0-23) ",T1.hr);
    scanf("%d",&T1.hr);

    printf("Enter min (0 -59) ");
    scanf("%d",&T1.min);

    printf("Enter sec(0-59)");
    scanf("%d",&T1.sec);

    ///output
printf("\ntime");
printf("\n time is %02d:%02d:%d",T1.hr,T1.min,T1.sec);


 }

