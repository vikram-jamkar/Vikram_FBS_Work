/*4. WAP to Form a New String where the First Character and the Last Character have
been Exchanged*/
#include<stdio.h>
void main(){
       char arr[10];
       int i;
       char temp =0;

        printf("enter the string:");
        scanf("%s",arr);
        

        for ( i = 0; arr[i] !='\0'; i++)
        {
                int count=0;
        }

           temp = arr[0];
           arr[0]=arr[i-1];
            arr[i-1] = temp;
        
printf("new string:%s",arr);
 
        
        

}