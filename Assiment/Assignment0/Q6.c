#include <stdio.h>

//6. Write a C program to find the square and cube of a given number.
void main (){
    int num ,squere,cube;

    //user input karna
    printf("Enter the number : = ");
    scanf ("%d ",&num);

    // squere our cube calculet
       
         squere = num * num;
         cube  = num * num * num ;

         printf("Squere %d ",squere);
         printf("cube %d",cube);
}