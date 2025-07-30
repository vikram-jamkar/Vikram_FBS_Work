#include <stdio.h>
//function  mystrchr()
char*  mystrchr(const char str[],char ch);

void main (){
       
        char name [] = "vikram jamakr";
       char find = 'j';
       char* res = mystrchr(name,find); //call
       if (res!=NULL)
       {
         printf("Character '%c' found at position: %ld\n", find, res - name);
       }else{
         printf("Character '%c' found at position: %ld\n", find, res - name);
       }
       

}
        char*  mystrchr(const char str[],char ch){

            int i = 0;
            while ( str[i] != '\0')
            {  if (str[i]==ch)
            {
                   return (char*)&str[i];
            }
            i++;
              
            } return NULL;
            




          }