#include <stdio.h>
#include <string.h>
//function 
//1 name strstr 
// para 2 
//data ty char
//retrun char 
// defi ek strin   me dusra sring dhuda ta he 
void main (){
    char name [] = {"vikram jamkar "};

           char*res =  strstr(name ,"ka");
           if (res != NULL){
          
           printf("mila%s",res-name);
        
        }else{
            printf("nai mila");
        }
        
}