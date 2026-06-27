//2. Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene
void trangle(); //funtion defination
#include<stdio.h>
void main()
{

    trangle();//funtion call invok
    
}
void trangle(){// funtion decleretion
    int a,b,c;
    printf("Enter three  side :\n");
    scanf("%d %d %d",&a,&b,&c);

    if (a==b && b==c)
    {
        printf("Equilareal trangel");

    }else if(a==b||b==c||c==a){
        printf(" Isosceles");
    }
    else{
        printf("Scalene");
    }}