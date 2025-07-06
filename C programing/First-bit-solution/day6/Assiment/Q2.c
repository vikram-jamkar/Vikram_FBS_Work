#include <stdio.h>
void main (){

    int side1,side2,side3;

    //user valu 
    printf("Enter frist side ");
    scanf("%d",&side1);

    printf("Enter seconde side");
    scanf("%d",& side2);

    printf("Enter third side");
    scanf("%d",&side3);

    if (( side1 + side2 > side3 )&&
    (side2 + side3 > side1)&&
    (side1 + side3 > side2)){
        if (side1 == side2 && side2 == side3) {
         printf("The triangle is Equilateral.\n");

    }else if(side1 == side2 || side2 == side3 || side1 == side3)


     printf("The triangle is Isosceles.\n");

else {
            printf("The triangle is Scalene.\n");
        }

    } else {
        printf("Triangle is not possible with given sides.\n");
    }

}