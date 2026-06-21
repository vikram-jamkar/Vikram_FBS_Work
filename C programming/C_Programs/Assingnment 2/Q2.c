//2. Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene
#include<stdio.h>
void main()
{
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
    }
}
