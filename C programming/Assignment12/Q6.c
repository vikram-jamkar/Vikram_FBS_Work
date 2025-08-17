#include <stdio.h>
//6. WAP to Take in a String and Replace Every Blank Space with special symbol.
void main (){
    char str [10];
    int i;
    printf("Enter the string");
    gets(str);

for (  i = 0; str[i] != '\0'; i++)
{
          if (str[i] == ' ')
          {
             str[i]='&';
          }
          
}

printf("replace string %s",str);



}