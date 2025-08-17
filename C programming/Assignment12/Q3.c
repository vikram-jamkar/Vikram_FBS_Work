#include <stdio.h>
#include<string.h>
//3. WAP to Remove the nth Index Character from a Non-Empty String
void main (){
    char str1[10];
    int index;
        
    printf("Enter the string ");
    gets(str1);
       
    printf("Enter the index");
    scanf("%d",&index);

    int len = strlen(str1);
      
    if (index < 0 ||index >= len ){
           printf("invalid index");

    }else{
        for (int i = index; i < len; i++)
        {
            str1[i] = str1[i + 1];
        }
         printf("Updated string: %s\n", str1);
    }





}

