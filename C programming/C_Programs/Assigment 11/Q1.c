/*Q1 fund the maximum and minimum nuber in aarry*/

#include<stdio.h>
void main(){
            int arr[5];

            printf("Enter the  number\n");
            for(int i = 0; i<5;i++)
            {
                scanf("%d",&arr[i]);
            }
                
             for(int i = 0; i<5;i++)
            {
            printf("%d",arr[i]);
            }
           
             int max = arr[0];
             int min = arr[0];
             for (int  i = 1; i < 5; i++)
             {
                if(arr[i]> max){
                     max = arr[i];
                }
                if(min > arr[i]){
                    min =arr[i];
                }
             }
             printf("\n max number:%d ",max);
             printf("\n min number:%d ",min);
             

}