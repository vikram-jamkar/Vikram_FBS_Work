#include <stdio.h>
#include <string.h>
//function strcmp ()
//name strcmp ()
//para 2 str1 str2
//data type char 
// retrun int
//compere the tow string assci valu 
int main (){

    char str1 [] = {"vikram"};
    char str2 [] = {"vikram"};

          int  res = strcmp(str1,str2);

          printf("cpmpare%d",res);
          return 0;
}