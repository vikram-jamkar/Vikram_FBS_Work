/*9. WAP to Take in Two Strings and Display the Larger String without Using Built-in
Functions*/
#include<stdio.h>
void main(){
    char arr[50];
    printf("Enter the element:");
    gets(arr);
    char ptr [50];
    printf("Enter the element:");
    gets(ptr);

    int count1= 0;
    int count2=0;

    for(int  i = 0; arr[i] !='\0' ; i++)
    {
        count1++;
    }
    
   
    for (int i = 0; ptr[i] != '\0'; i++)
{
    count2++;
}
if (count1 > count2)
{  printf("%s", arr);
}else printf("%s",ptr);

}