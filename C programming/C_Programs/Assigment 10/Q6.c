//6 WRITE A PROGRAM TO  WHETHER GIVEN  CHARACTER IS UPPER TO LOWERCASE
   void cheakchar(char* ch);
#include<stdio.h>
void main(){
            char  ch;
            printf("Enter the character\n");
            scanf("%c",&ch); 
             cheakchar(&ch);
          
}
    void cheakchar(char* ch){
             if(*ch >= 'A' && *ch <='Z'){
                printf("upercase character");
            }else if(*ch >='a' && *ch <= 'z'){
                printf("lowercase character");
            }
            else{printf("not an alphtabet");}
     }