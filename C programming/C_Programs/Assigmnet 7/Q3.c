// 3 WRITE A PROGRAM TO CHEAK  LEPP YEAR AND NOT LEEP YEAR
int cheakyear();
#include<stdio.h>
void main (){

    if (cheakyear())
    {
      printf("leep year");
    }else{printf("not leep");}
     

}
             int cheakyear(){
             int year;
             printf("Enter the number ");
             scanf("%d",&year);
              
             if(year%4==0)
             {
               return 1;

             }
             else{
             return 0;
              }}
