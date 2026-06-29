// 3 WRITE A PROGRAM TO CHEAK  LEPP YEAR AND NOT LEEP YEAR
void  cheakyear(int);//funtion defination
#include<stdio.h>
void main (){
              int year;
              printf("Enter the year ");
              scanf("%d",&year);
              cheakyear(year);//funtion call
            


}//end main
           void  cheakyear(int year){//funtion deleretion
                  if(year%4==0)
              {
               printf("This year is leepyear");
              }
              else{
                   printf("this is not leepyear");

              }

             }
