#include <stdio.h>
void main (){
    int age;

    //ask user to enter age
    printf("Enter the age");
    scanf("%d",&age);

    //cheak the eligibility
     if(age>=18) {

        printf("you are eligibile for vote");

     }
     else{

            printf("you are not eligibile vote");
     }
}
