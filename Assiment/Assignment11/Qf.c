#include <stdio.h>
  void  mystrUper(char str[]);
// function name mystrUper()
void main (){
     char name []   = "vikram 123 jamkar ";

          mystrUper(name);// function call  

          printf("result :=%s",name);

}

  void   mystrUper(char str[]){
        int i = 0;
         while ( str[i] !='0')
         {
            if (str[i]>= 'a' && str[i] <='z' ){
                   str[i] = str[i]-32;
                            }
                            i++;
         }
         
     }

    