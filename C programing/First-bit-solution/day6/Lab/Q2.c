#include <stdio.h>
void main (){
       int num;
       //ask the user input
    printf("Enter the number");
    scanf("%d",& num);

    // sytyx the code
    if(num > 0){
        printf("number is positive");

    } else if (num < 0){
        printf("number is negative");

    }else{
        printf("the number is zero");
    }

}