//5 write a program to cheak  whether  a prson is eligible to vote (age>18)
int isvote();
#include<stdio.h>
void main(){
             if ( isvote())
             {
               printf("eligible");
             }else
             {
             printf("not eligible");
             }
             
          

}


int isvote(){ 
             int age;
             printf("Enter the age\n");
             scanf("%d",&age);
             if(age>=18)
             return 1;

             else
              return 0;}