#include <stdio.h>
//8. Write a C program to input the length and width of a rectangle and find its perimeter.
void main (){
    int len,wid,par;


    //user input len and wid 
    printf("Enter the len and wid := ");
    scanf("%d %d",&len,&wid);

    //calculation 
          par = 2 *( len + wid );

          printf("par = %d",par);
}
