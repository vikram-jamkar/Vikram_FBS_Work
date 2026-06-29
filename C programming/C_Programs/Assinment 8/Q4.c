//4 WRITE A  PROGRAM TO CHEAK  GIVEN CHARACTER IS A VOWEL OR CONSONANT 
void cheakchar( char ch);
#include<stdio.h>
 void  main(){
               char ch;
              printf("Enter tne character\n");
              scanf("%c",&ch);
              cheakchar(ch);


 }

  void cheakchar( char ch){
                            if(ch=='a' || ch =='e' || ch=='i'||ch=='o'||
                  ch=='A'|| ch=='E'||ch=='I' ||ch=='O')
                  {
                     printf("Vowel");
                  }else{
                    printf("CONSONANT");
                  }
  }