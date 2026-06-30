//5 write a program to cheak  whether  a prson is eligible to vote (age>18)
vote(int age);
#include<stdio.h>
void main(){
             int age;
             printf("Enter the age\n");
             scanf("%d",&age);
             if (vote(age))
             {
                printf("elegeble");
             }
             else{printf("not elegeble");}

}


        int  vote(int age){

             if(age>=18)
               return 1;

             else  return 0;
         }
