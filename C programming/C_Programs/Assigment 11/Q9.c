/*reverse the given range */
 void storearr(int*ptr,int size);//funtion defination
 void display(int*ptr,int size);
 void  reverse(int*ptr,int size);
 
#include<stdio.h>
void main(){
   int  arr[10];

     printf("enter the element");
     storearr(arr,10);// funtion call
     printf("Original Array:\n");
     display(arr,10);//funtion call
     printf("\nReverse Array:\n");
     reverse(arr,10);//funtion call

}//main end 

  void storearr(int*ptr,int size){//funtion delclerion 
    for (int i = 0; i < size; i++)
    { scanf("%d",&ptr[i]);}}


    void display(int*ptr,int size){//funtion delclerion 
    for (int i = 0; i < size; i++)
    {printf("%d ",ptr[i]);}}


    void  reverse(int*ptr,int size){
    for (int i = size-1; i >= 0; i--)
    { printf("%d ", ptr[i]);}}
