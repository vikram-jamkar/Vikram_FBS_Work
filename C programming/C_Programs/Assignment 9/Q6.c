//2. Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene
int tringle(int a,int b,int c);
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three  side :\n");
    scanf("%d %d %d",&a,&b,&c);
       int res = tringle(a, b, c);
       if (res == 1)
       {
        printf("equilateral");
       }else if (res == 2)
       {
        printf("isosceles");
       }else{printf("scalene");}
 
}
int tringle(int a,int b,int c){
      if (a==b && b==c)
    {
       return 1;

    }else if(a==b||b==c||c==a){
        return 2;
    }
    else{
        return 3;

    }
}