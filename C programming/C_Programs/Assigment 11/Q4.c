/*find the odd and even among the number */
#include<stdio.h>
void main(){
    int arr[5];

    printf("enter the element:");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);}

          printf("arry of element:");
         for (int  i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);}
       

        for (int i = 0; i <5; i++)
        {
          if (arr[i]%2==0)
          {
            printf("\n number even:%d ",arr[i]);
          }else{printf("\n number odd:%d ",arr[i]);}
          
        }
        

    
}