//3. WAP to Remove the nth Index Character from a Non-Empty String
#include<stdio.h>
void main(){
    char arr[10];
    printf("enter the:");
    scanf("%s",arr);
    int n;
    printf("entr number delete indix:");
    scanf("%d",&n);

    for (int i = n; arr[i] !='\0'; i++)
    {
        arr[i] =arr[i+1];
    }printf("%s",arr);
    


}


