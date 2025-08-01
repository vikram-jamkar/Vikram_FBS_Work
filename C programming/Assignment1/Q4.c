#include <stdio.h>
//Q4 write a program  cheak lether  a given charecter is a voweal or consonatt
void main (){
    char ch;
    
    //user input lena 
    printf("Enter a  ch");
    scanf("%c",&ch);

          if(ch == 'a' || ch == 'e' || ch =='i' || ch =='o'||ch == 'u'|| ch =='A' || ch == 'E' ||  ch == 'I' || ch =='O' || ch =='U'){
            printf("%c is vowel",ch);
          }else if (ch >='A' && ch <'Z' || ch >='a'&& ch <='z'){
             printf("%c is consonate",ch);
          }else{
            printf("invalid consonad plaz seach chr");
          }

          
}