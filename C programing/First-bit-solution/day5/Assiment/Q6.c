#include <stdio.h>
void main (){
    char ch;  printf("Enter the Character : ");
    scanf("%c",&ch);

    // uppercase to lowercase
    if(ch >='A'&& ch <= 'Z'){

        //ask user character
        printf("%c is an uppercase letter.\n", ch);

    } else if(ch >='a'&& ch <= 'z'){
        
        printf("%c is a lowercase letter.\n", ch);

    } else{
         printf("%c is not an alphabet letter.\n", ch);
    }
}    
