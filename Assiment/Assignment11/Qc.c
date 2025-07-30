#include <stdio.h>
//function mystrcmp()
int  mystrcmp(const char  str1[],const char str2[]);
void main (){

    char s1  [] ="apple";
    char s2 [] = "appl";


        int res = mystrcmp(s1,s2); //funtion call
        if (res == 0){
        printf("string is eqal");   
        } else if (res < 0){
                printf("string not eqaul");
            }else{
                 printf("First string is greater\n");
            }
           
        
        

}
          int  mystrcmp(const char  str1[],const char str2[]){
            int i = 0;
            while (str1[i] !='\0'&& str2 [i]!='\0'){
            if (str1[i] != str2[i]){
                  return str1[i]-str2[i];
            }
                     
            
            i++;
        } return str1[i]-str2[i];
   
           }
            