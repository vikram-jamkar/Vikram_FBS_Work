/*print the alternet element in arry*/
#include<stdio.h>
void main(){
   int  arr[5];

   printf("enter the element");

   for(int i =0;i < 5;i++){
    scanf("%d",&arr[i]);}
printf("\nArray Elements: ");
    for(int i =0;i < 5;i++){
    printf("%d ",arr[i]);}
    
printf("\nAlternate Elements: ");
    for(int i =0;i < 5;i+=2){
        
        printf("%d ",arr[i]);
    }


}