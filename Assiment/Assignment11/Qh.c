#include <stdio.h>
void  mystrrev(char str[]);
//function strrev()
void main (){
    char name [] =  "vikram";

    mystrrev(name);
     printf("String revers:=%s",name);

}
  void  mystrrev(char str[]){
        int i = 0; int j =0;
        

        while(str[j] != '\0'){
              j++;

        } j=j-1;
    
    
    while (i < j)
    {
        
      char temp = str[i];
       str[i] = str[j];
     str[j]  = temp;
     i++;
     j--;
    }
    
    
    }