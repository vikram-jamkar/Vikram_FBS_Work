//4 WRITE A  PROGRAM TO CHEAK  GIVEN CHARACTER IS A VOWEL OR CONSONANT 
  void cheakchar();//funtion defination
#include<stdio.h>
 void  main(){
              cheakchar();//funtion call




 }

            void cheakchar(){//funtion deleretion
                  char ch;
              printf("Enter tne character\n");
              scanf("%c",&ch);
              if(ch=='a' || ch =='e' || ch=='i'||ch=='o'||
                  ch=='A'|| ch=='E'||ch=='I' ||ch=='O')
                  {
                     printf("Vowel");
                  }else{
                    printf("CONSONANT");
                  }

             }