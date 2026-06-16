//6.Write a C program to find the square and cube of a given number
#include<stdio.h>
int main(){
    int num;
    int square,cube;

    printf("Enter a number\n");
    scanf("%d",&num);

      square = num * num;
      cube = num * num * num;
      printf("square of  = %d",square);
      printf("\ncube of = %d",cube);
      return 0;

}