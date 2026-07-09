//2. WAP Replace all Occurrences of ‘a’ with $ in a String


#include<stdio.h>
void main(){
    char arr[10];
    printf("Enter the the string:");
    scanf("%s",arr);

     char ch='$';
   

     for (int  i = 0; arr[i] !='\0'; i++)
     {
        if (arr[i]=='a')
        {
         arr[i] = ch;
        }
        
     }printf("%s", arr);
     
   

}