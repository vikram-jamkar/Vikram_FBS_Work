#include <stdio.h>
//2 Write a C program to find the area of a circle.

void main (){
    float area,redius;
    float pi = 3.14;

    // input user valu 
    printf("Enter the redius");
    scanf("%f",&redius);


    //calculetion

        area = pi * redius * redius;

        printf("total area %2lf",area);

}