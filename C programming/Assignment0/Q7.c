#include <stdio.h>
void main (){
    int min,hor,remin;

    //user input min 
    printf("Enter the min ");
    scanf("%d",& min);

    //calculatin
        hor = min / 60;
        remin = min % 60;

        printf("hor = %d remin = %d min = %d",hor,remin,min);
}