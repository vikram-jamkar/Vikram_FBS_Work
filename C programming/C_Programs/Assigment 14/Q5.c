//5. WAP to Count the Number of Vowels in a String
#include<stdio.h>
void main(){
    char arr[20];
    int count=0;
    printf("Enter the string:");
    scanf("%s",arr);
    
    for (int i = 0; arr[i]!='\0'; i++)
    {
       if (arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||
    arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
       {
          count++;
       }
       
    } printf("%d",count);
    

}