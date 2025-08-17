#include <stdio.h>
//Q4WAP to Count the Number of Vowels in a String
void main (){
    char str[10];
    int count;
           
    printf("Enetr the string");
    gets(str);               // user input 


    //cheak vowel codition

    for ( int i = 0;  str[i]!='\0'; i++)
    {
        if (str[i]== 'a' || str[i] == 'e' || str[i] == 'i'|| str[i] =='o'|| str[i] =='u'||str[i]== 'A' || str[i] == 'E' || str[i] == 'I'|| str[i] =='o'|| str[i] =='U'){
           
                 count++;


        }
        
            
  
        
    }
    

printf("Number of vowels in the string: %d", count);




}