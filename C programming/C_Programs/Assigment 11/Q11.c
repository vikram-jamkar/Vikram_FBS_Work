/*repece arry use funtion */
void storearr(int* ptr,int size);
void display(int*ptr,int size);
void  replace(int* ptr,int size,int old,int new);
#include<stdio.h>
void main(){
    int arr[10];

    printf("Enter the element ");
    storearr(arr,10);//funtion call
    display(arr,10);

 replace(arr,10,5,7);//funtion call
 printf("\n\nArray after replacement:\n");
 display(arr,10);
 
 
}//main end

     void storearr(int* ptr,int size){//funtion deleretion
     for (int i = 0; i < size ; i++)
     {scanf("%d",&ptr[i]);}}

    void display(int*ptr,int size){
          for (int i = 0; i < size ; i++)
     {printf("%d ",ptr[i]);}
     }

     void  replace(int* ptr,int size,int old,int new){//funtion decleretion
     for (int i = 0; i < size; i++)
     {
     if (ptr[i]==old)
     {
     ptr[i]= new;
     }
   
     }

      }