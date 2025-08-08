#include <stdio.h>
#include <string.h>
//function
// name strncpy ()
// para 3 source destineetion n 
//data ty char 
//retrun char 
//  source cpy n to destinetion 

void main (){
    char source [] = {"vikram jamkar"};
    char desti [20];
     
         strncpy(desti,source,6);

         printf("source code cpy n  with deti %s",desti);

}
