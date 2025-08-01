#include <stdio.h>
// 1 Write a program to check whether a number is even or odd.

void main(){

    int number;


    //input usere
    printf("Enter the number");
    scanf("%d",&number);

    if(number % 2 == 0){

        printf("%d tis number even",number);

    }else{
        printf("%d  is odd number ",number);
    }


}