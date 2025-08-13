#include <stdio.h>
//funtion mystrlower();
  void   mystrLowr(char str[]);
void main (){
    char name [] = "VIKRAM123JAMAKR";

          mystrLowr(name);
          printf("result:=%s",name);


}
           void   mystrLowr(char str[]){
               int  i = 0;
               while (str[i] !='\0' )
               {
               if ( str[i]>= 'A' && str[i]<='Z')
               {
                              str[i] = str[i] + 32;
                              
               }
                i++;
               }
               
            

             }