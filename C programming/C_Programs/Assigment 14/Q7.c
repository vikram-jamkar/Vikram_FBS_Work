//7. WAP to Remove the Characters of Odd Index Values in a String
#include<stdio.h>
void main(){
    char arr[] = {"hello"};


    for (int  i = 0; arr[i] !='\0'; i+=2)
    {
          printf("%c",arr[i]);
    }
    


}