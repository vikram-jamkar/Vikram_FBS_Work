#include <stdio.h>
void main ()
{

    int year = 1900;

    if (year%4==0&&year%100==0||year%100==0)
     {
            printf("it is a lepp year");

    }
    else {
        printf("it is a not leep year");
    }

}