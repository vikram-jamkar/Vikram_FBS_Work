#include <stdio.h>
//7. WAP to Remove the Characters of Odd Index Values in a String
void main (){
    
    char str[100];
     char  result[100];
     int i,j = 0;

     printf("Enter the number");
      gets(str);


      for ( i = 0; str[i] !='\0' ; i++)
      {
           if ( i % 2 ==0)
           {
               result[j]  = str[i];
               j++;
           }
        
      } 
          result[j] !='\0';
      
           printf(" string index is remove odd:=%s",result);

}