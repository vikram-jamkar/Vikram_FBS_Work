//5 write a program to cheak  whether  a prson is eligible to vote (age>18)
 void vote_age();//funtion decleration
#include<stdio.h>
void main(){
           vote_age();//funtion call

}



     void vote_age(){ int age;//funtion defination
             printf("Enter the age\n");
             scanf("%d",&age);
             if(age>=18)
                printf("Eligible for vote");

             else printf("Not Eligible for vote");}
