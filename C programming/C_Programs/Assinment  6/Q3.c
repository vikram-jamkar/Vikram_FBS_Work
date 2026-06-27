// 3 WRITE A PROGRAM TO CHEAK  LEPP YEAR AND NOT LEEP YEAR
void cheakyear();// funtion defination
#include<stdio.h>
void main (){
             
    cheakyear(); //funtion call



}

void cheakyear(){ int year;//funtion declerectiom
              printf("Enter the number ");
              scanf("%d",&year);
              
              if(year%4==0)
              {
               printf("This year is leepyear");
              }
              else{
                   printf("this is not leepyear");

              }

}

