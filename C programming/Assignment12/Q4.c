#include <stdio.h>
#include <string.h>
/*4. WAP to Form a New String where the First Character and the Last Character have
been Exchanged*/
void main () {
    char str1[20];
    int len;
    char temp;

    
      printf("Enter the string:=");
      gets(str1);


       len =  strlen(str1);

       if ( len < 2)
       {
            printf("plz Enter two charecter");
       }else {       //0        <<
                    temp = str1[0];
                    str1[0] = str1[len-1];
                     //  u               <<<
                     str1[len -1] = temp;
                     printf("the new string is :=%s",str1);

       }                           
       











}