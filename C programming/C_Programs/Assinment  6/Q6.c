//6 WRITE A PROGRAM TO  WHETHER GIVEN  CHARACTER IS UPPER TO LOWERCASE
void cheakchar();
#include<stdio.h>
void main(){
   void cheakchar();         

            
}

void cheakchar(){//funtion decleretion 
char  ch;
            printf("Enter the character\n");
            scanf("%c",&ch); 

            if(ch >= 'A' && ch <='Z'){
                printf("upercase character");
            }else if(ch >='a' && ch <= 'z'){
                printf("lowercase character");
            }
            else{printf("not an alphtabet");}}