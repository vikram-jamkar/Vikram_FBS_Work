//8. Complex (real, imaginary)
struct complex 
{
    float real;
    float imaginary;

};
#include<stdio.h>
void main(){
    struct 
    complex c1;

   printf("Enter real number: ");
    scanf("%d", &c1.real);

    printf("Enter imaginary number: ");
    scanf("%d", &c1.imaginary);

    printf("complex number = %d + %di",c1.real,c1.imaginary);

}