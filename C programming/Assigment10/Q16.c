#include <stdio.h>
#include <string.h>
//funtion name 
//strpbrk()

void main (){
    char str1[]= "vikram";
    char str2 [] = "xyzr";
   

     char * result =strpbrk(str1,str2);

     if ( result != NULL)
     {
        printf("First matching character: %c\n", *result);}
    else
        printf("No matching character found.");
     }
     

