// 3 WRITE A PROGRAM TO CHEAK  LEPP YEAR AND NOT LEEP YEAR
int  cheakyear(int year);
#include<stdio.h>
void main (){
              int year;
              printf("Enter the number ");
              scanf("%d",&year);
              
             if (cheakyear(year))
             {
               printf("leep year");
             }
            else{printf("not leepyear");}


}
        int  cheakyear(int year){
             if(year%4==0)
              {
               return 1;
              }
              else{
                 return 0;


              }

          }

