//5 write a program to cheak  whether  a prson is eligible to vote (age>18)

#include<stdio.h>
void main(){
             int age;
             printf("Enter the age\n");
             scanf("%d",&age);
             if(age>=18)
                printf("Eligible for vote");

             else printf("Not Eligible for vote");

}