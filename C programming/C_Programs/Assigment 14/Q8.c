//8. WAP to Calculate the Number of Words Present in a String

#include<stdio.h>
void main(){
    char arr[20];
    printf("enter the atring:");
    gets(arr);

 int count =1;
 for (int  i = 0; arr[i] !='\0'; i++)
 {
    if (arr[i]==' ')
    {
        count++;
    }
   
 } printf("%d",count);
 

}