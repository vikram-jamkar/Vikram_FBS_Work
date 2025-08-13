#include <stdio.h>
//function mystrcat
void  mystrcat(char src[],const char dest []);
void main () {
     char str1[] = "vikram";//src
     char str2 [100] = "jamkar";// dest


     mystrcat(str1,str2); //fution call


     printf("result :=%s",str1);
}


      void  mystrcat(char src[],const char dest []){

      int i = 0, j = 0;
         // ye  i ko src ke end tak jaye ga 
      while(src[i] !='\0'){
        i++;
      }
      while (dest[j] !='\0'){

              src[i]  = dest[j];
              i++;
        j++;

      } src[i] !='\0';}

