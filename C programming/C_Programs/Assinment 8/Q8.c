//2. Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene
 void  triangel(int a , int b,int c);//funtion defination
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three  side :\n");
    scanf("%d %d %d",&a,&b,&c);
triangel(a,b,c);//fumtion call
   
}
 void  triangel(int a , int b,int c){//funtion deleretion 
    if (a==b && b==c)
    {
        printf("Equilareal trangel");

    }else if(a==b||b==c||c==a){
        printf(" Isosceles");
    }
    else{
        printf("Scalene");
    }}