/*find the sum of arry all number 
*/
#include<stdio.h>
void main(){
           int arr[5];

           printf("enter the element:");
           for(int i = 0 ; i < 5;i++)
           {
            scanf("%d",&arr[i]);}
            printf("arry of element:");
            for(int i = 0 ; i < 5;i++)
           {
          printf("%d",arr[i]);}
            int sum =0;
          for (int i = 0; i < 5; i++)
          {
               sum =sum + arr[i];
          }
          printf("\nsum:%d",sum);

}
