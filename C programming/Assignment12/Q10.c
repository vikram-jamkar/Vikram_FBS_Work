 #include <stdio.h>
 #include <string.h>
//10. Write a program to check the string is palindrome or not.
void main (){
    char str [10];
   int ispalindrome = 1;
   int i;

   printf("Enter a string:=");
   gets(str);



       int  len = strlen(str);


           for (i = 0;i < len  / 2 ;i++){
                if (  str[i] != str[len-1-i]){
                
                    ispalindrome =0;
                    break;
           }
        
              }  
              
              if ( ispalindrome == 1)
               {
               
                      printf("String is palindrome := %s\n", str);
               }else{
                printf("not palindrome");
               }
               
            
           
        }