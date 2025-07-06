#include <stdio.h>
void main (){
    char ch;
  //ask user the alphabet
    printf(" Enter the Alphabet: ");
    scanf("%c",&ch);

    //cheak if charecter is alphabet
    if( ch >='A'&& ch  <= 'Z' || ch >= 'a' && ch <= 'z')
      if(ch == 'a' || ch == 'e'  || ch == 'i' || ch == 'o'|| ch == 'u' || ch == 'A'|| ch == 'E'|| ch == 'I' || ch == 'O' || ch == 'U')
     {  
        printf("%c is a vowel :",ch);
    }

        else {
                 printf("%c is a consonant.\n", ch);
        }
         else{

            printf("Invalid input. Please enter an English alphabet.\n");
         }

    
}