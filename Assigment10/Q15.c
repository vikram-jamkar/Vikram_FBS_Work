#include <stdio.h>
#include <string.h>
//function name 
//strnset ()
//para 3 char * string int size n ch
//dy chr
//rep letr an di size

void main (){
    char str [] ="vikram jamkar";
     
    strnset(str,'$',7);
    printf("change the string %s",str);
}