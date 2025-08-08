#include <stdio.h>
#include <string.h>
//found 
//name strrchr()
// para 2 char* char
// data ty char int 
//char*
// charachter ko last se dhhod ta he 
int main (){
    char str []=" apple pie";
           char*   ptr = strrchr(str,'a');
           
           if (ptr !=NULL){  printf("foud%d",ptr-str);
        }
        else{
                  printf("not found");
        }
        
    } 


           