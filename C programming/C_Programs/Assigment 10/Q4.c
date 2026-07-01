// 3 WRITE A PROGRAM TO CHEAK  LEPP YEAR AND NOT LEEP YEAR
  void  cheakyear(int* year);
#include<stdio.h>
void main (){
              int year;
              printf("Enter the number ");
              scanf("%d",&year);
              cheakyear(&year);
             



}
     void  cheakyear(int* year){
         if(*year%4==0)
              {
               printf("This year is leepyear");
              }
              else{
                   printf("this is not leepyear");

              }
      }
