//9. Write a C program to input the base and height of a triangle and calculate its area.
#include<stdio.h> 
int main(){
    int height;
    int base ,area;
printf("Enter the base and height :\n");
scanf("%d %d",&base,&height);
    area = (base * height) /2;

    printf("triangle of area %d",area);
return 0;
}