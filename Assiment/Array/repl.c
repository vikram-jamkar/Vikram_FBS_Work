#include <stdio.h>
void  sotrearr(int*, int);//deleretion
void displayarr(int*,int);
void replacearr(int*,int,int,int );
// 1 int arr(10);
//2 soterearr(arr,10);
//3 display arr (arr,10)'
//4repalce (arr,10,5,7);
// 5 disaply (arr,10);
void main (){
    int arr [10];
     // All function
     
     printf("please Enter the number");
    sotrearr(arr,10);//call
    displayarr(arr,10);//call}
    replacearr(arr,10,5,7);//call
    printf("\nAfter replacing 5 with 7: ");
     displayarr(arr,10);
     }
//end main

     // scanarry
 void  sotrearr(int*ptr, int size){// definetiom
    for(int  i = 0; i < size;i++){
       scanf("%d",&ptr[i]);
    }}//scan end 


        // display 
    void displayarr(int*ptr,int size){// definetion
        for(int i = 0; i < size; i++){
            printf("%d",ptr[i]);  }
  }
   void replacearr(int*ptr,int size,int old ,int new){
    for(int i = 0; i < size; i++){
        if(ptr[i]==old){
              ptr[i] = new ; 
        }
    }
    
   }
        
