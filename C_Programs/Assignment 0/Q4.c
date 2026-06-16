//4. Write a C program to swap two numbers using a temporary third variable

#include<stdio.h>
int main(){
    int a ,b ,temp;

    printf("Enter the  first number:");
    scanf("%d",&a);
    printf("Enter the  second number:");
    scanf("%d",&b);

    printf("\nBefore swapping: a = %d,b = %d",a,b);

      temp=a;
      a=b;
      b=temp;
     printf("\nAfter swapping: a = %d,b=%d",a,b);



return 0;
}