#include <stdio.h>
  int  mystrlen(const char str[]);
//function mystrmylen 
void main () {

    char name [] = "vikram jamkar";

     int  lenght = mystrlen(name); //function call

          printf("count string := %d",lenght);
}
   int  mystrlen(const char str[]){
    int count = 0;

    while (str[count]!='\0'){
       count++;
    }
       return count;
   }