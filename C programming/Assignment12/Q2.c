#include <stdio.h>
//2. WAP Replace all Occurrences of ‘a’ with $ in a String
void main (){
    char str [100];

      printf("Enter the string");
       gets(str);

       for (int  i = 0; str[i] != '\0'; i++)
       {
        if (str[i] == 'a' )
        {
            str[i] = '$';
        }
        
        
            
       }

       printf("update  string %s\n ",str);
       

       



}