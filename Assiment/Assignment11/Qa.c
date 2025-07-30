#include <stdio.h>
// user difind function mystrcpy()
 void  mystrcpy (char dest [],const char src[]);
void main (){
    
      
     char source [] = "vikram";
     char destination [100];
      
    mystrcpy(destination,source); // function call 
     printf("cpoid string :=%s",destination);
}
   
    void  mystrcpy (char dest [],const char src[]){
       int i =0;

        while (src[i]!= '\0'){
                 dest[i] = src[i];
             i++;
        }
        dest[i];

     }
     