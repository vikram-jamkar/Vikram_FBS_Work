//4 WRITE A  PROGRAM TO CHEAK  GIVEN CHARACTER IS A VOWEL OR CONSONANT 
 int  cheakchar();
#include<stdio.h>
 void  main(){
              if (cheakchar())
              {
                printf("vowle");
              }else{
                printf("consonad");
              }
              
 }


         int  cheakchar(){
            char ch;
              printf("Enter tne character\n");
              scanf("%c",&ch);
              if(ch=='a' || ch =='e' || ch=='i'||ch=='o'||
                  ch=='A'|| ch=='E'||ch=='I' ||ch=='O')
                  {
                     return 1;
                  }else{
                    return 0;
                  }
          }