//6. WAP to Take in a String and Replace Every Blank Space with special symbol.

#include<stdio.h>
void main(){

    char arr[50] ;
    printf("enter the string:");
    fgets(arr, 50 ,stdin);

    for (int  i = 0; arr[i] !='\0'; i++)
    {
        if (arr[i]==' ')
        {
           arr[i] = '&';
        }
        
    } printf("%s",arr);
    

}