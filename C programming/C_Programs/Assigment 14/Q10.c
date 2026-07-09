//10. Write a program to check the string is palindrome or not.
#include<stdio.h>
void main(){
    char arr[5];
    printf("Enter the element:");
    gets(arr);
int count=0;
for (int i = 0; arr[i] != '\0'; i++)
{
   count++;
}
int flag=0;
for ( int i = 0; i < count /2 ; i++)
{
    if (arr[i] != arr[count-1-i])
    {
       flag=1;
       break; 
    }
    
}if (flag==0)
{
    printf("string is palindrom");
}
else{printf("string is not palindrom");}

}