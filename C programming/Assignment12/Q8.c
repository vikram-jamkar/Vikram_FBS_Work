#include <stdio.h>
//8. WAP to Calculate the Number of Words Present in a String


void main (){
   char  str[100];
   int i;
  int  count = 0;
  

  printf("Enter the string");
  gets(str);

  for(i = 0 ; str[i] != '\0';i++){
    if ( str[i] == ' ' && str[i-1] !=' ' && i!='\0')
    {
             count++;
    }
    
  }if (str[i] != '\0')
  {
   count++;
  }
  

printf("alll space %d",count);





   
}