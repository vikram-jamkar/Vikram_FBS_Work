//7. Write a C program to convert given minutes into hours and remaining minutes.
#include<stdio.h>
int main(){
           int min;
           int hour ;
           
           printf("Enter the min:");
           scanf("%d",&min);

              hour = min / 60;
              min = min % 60;
        printf("%d:%d",hour,min);


}