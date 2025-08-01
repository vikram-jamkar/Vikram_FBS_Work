#include <stdio.h>

void main (){
    //4 Write a C program to swap two numbers using a temporary third variable.
    int a, b, temp;
    //user input valu 
printf("Enter the two valu:=");



    scanf("%d %d",&a ,&b);

    //calcul
       temp = a;
          a = b;
          b  = temp;

          printf("Afther the swapoing a = %d, b = %d",a,b);




}