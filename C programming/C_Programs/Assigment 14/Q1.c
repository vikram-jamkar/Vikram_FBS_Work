/*1. Write a program to scan string from user then scan a single character and search it
in a accepted string.*/

#include<stdio.h>
void main(){
    char str[50];
     
       printf("Enter string: ");
    scanf("%s", str);
      char ch;
      printf("enter the sexrch char");
      scanf(" %c",&ch);
    int found=0;
      for (int i = 0; str[i] !='\0'; i++)
      {
        if(str[i]==ch){
           found=1;
        }
      }if (found==1)
      {
        printf("found char");
      }else{printf("not found ");}
      
      


}