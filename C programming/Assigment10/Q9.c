#include <stdio.h>
#include <string.h>
//function
// name strncmp(
//para 3 str1 str2 n
// data ty char
//retrun int 
// de/ compere tow string and insser the  n valu

int main (){
    char str1 [] =  {"vikram jamkaar"};
    char str2 [] = { "VIKram jamkar"};

       int  res = strncmp(str1,str2,3);
        printf("cmp two string %d",res);
        return 0;

}