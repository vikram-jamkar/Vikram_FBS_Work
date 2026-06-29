//5 write a program to cheak  whether  a prson is eligible to vote (age>18)
void vote(int age);
#include<stdio.h>
void main(){
             int age;
             printf("Enter the age\n");
             scanf("%d",&age);
             vote(age);

}

        void vote(int age){
            if(age>=18)
                printf("Eligible for vote");

             else printf("Not Eligible for vote");
        }