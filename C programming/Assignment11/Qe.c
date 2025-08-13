#include <stdio.h>
void  mystrncpy(const char src[], char dest[],int n);
//function  name mystrncpy()
void main (){
    char str1 [] ="vikram";
    char  str2 [20];     
    mystrncpy(str1,str2,4);
printf("result : = %s",str2);


}
      void  mystrncpy(const char src[], char dest[],int n){
          int i = 0;

            while (i < n && src[i] !='\0')
            {             dest[i]  = src[i];
                i++;
            }

            while(i<n){
                dest[i] = '\0';
                i++;
            }
            dest[i] = '\0';
        }