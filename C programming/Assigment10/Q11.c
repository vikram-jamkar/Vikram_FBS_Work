#include <stdio.h>
#include <string.h>
//functon name 
//strchr ()
//para 2 para  chr* int
//data char*
//retrun char*
//charecter ko string me  me dhhod ta he 

int main (){
    
   char name  [] = "vikram";

      char* ptr =   strchr(name,'r');

           if (ptr!= NULL)
           {
            printf("charecter not found at postion:= %d",ptr-name);
           }else{
            printf("charecter not found");
           }
           



}