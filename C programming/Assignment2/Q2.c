#include <stdio.h>
/*2. Accept three sides of a triangle from the user and determine whether the triangle is
equilateral, isosceles, or scalene.*/

void main (){
    float a,b,c;
     
      printf("Enter the three side triangle");
      scanf("%f%f%f",&a,&b,&c);

// check triangle validity first
      if(a+b > c && b +c >a && a +c >b){
       if (a == b && b == c)
       {
            printf("Equilateral triangale");
       }else if ( a == b || b == c || c == a)
       {
          printf("Isosceles");
       }else{
            printf("Scalene triangle\n");
       }
      }else{
         printf("Not a valid triangle\n");
      }


}