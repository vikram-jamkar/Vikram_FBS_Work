/* Q2search the given number i arry */
#include<stdio.h>
void main(){
    int arr[5];

    printf("enter the element");
    for(int i = 0; i < 5 ; i++){
        scanf("%d",&arr[i]);}


    for(int i = 0; i < 5 ; i++){
        printf("%d",arr[i]);}

        printf("search element arry:");
        int num ;
        int fflg=0;
        scanf("%d",&num);
         for(int i = 0; i < 5 ; i++){  
            if(num == arr[i]){
                printf("number is found");
                fflg=1;
               break;
           
        }
        }if (fflg==0)
             {
                printf("not found");
             }
             
        }
             
