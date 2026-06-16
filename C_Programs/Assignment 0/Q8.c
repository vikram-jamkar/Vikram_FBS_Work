//8. Write a C program to input the length and width of a rectangle and find its perimeter
#include <stdio.h>
int main(){
            int lenght ,breadth, perimeter;

            printf("Enter the lenght and breadth : \n");
            scanf("%d %d",&lenght,&breadth);
            
            perimeter = 2 * (lenght + breadth);


            printf("perimeter %d",perimeter);

}