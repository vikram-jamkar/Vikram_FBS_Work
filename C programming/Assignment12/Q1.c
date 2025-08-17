#include <stdio.h>
/*1. Write a program to scan string from user then scan a single character and search it
in a accepted string.*/

void main ()
{
    char str1[100];// string  
    char ch; // cahrecter search karne ke liye 
    int fount = 0;// flag leke chala
    // user input 1
    printf("Enter the string:=");
    gets(str1);// take a full line input
      // user input char
    printf("Enter a character to search: ");
    scanf(" %c", &ch); 


      for ( int i = 0; str1[i] !='\0'; i++)
      {
           if ( str1[i]==ch){
            printf("charecter %c fount at postion%d",ch,i);
            fount=1;
            break;
           }
           
        }
        if (!fount)
           {
            printf("charchter not found %c ",ch);
           }
           
    
      





}