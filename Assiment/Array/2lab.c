#include <stdio.h>
void  stortArry(int*,int);//decleretion 
void  displayArry(int*,int );//fuction decleretion 
int serachinArry(int*,int,int);//function decleretion
void main (){
  int arr[10];
  printf("Plese Enter the number aary := ");
   
  
    stortArry(arr,10);//  call
   displayArry(arr,10); // funtion call

   printf("you wnat you search nuber ");
   int no;
   scanf("%d",&no);
      int  index = serachinArry(arr,10,no);// function call
     if( index == -1){
      printf("not found ");
     }else{
      printf(" number is found %d index",index);
     }

} // main end 
          // user scan adresss 
 void   stortArry(int*ptr, int size){ // definetion 
 for (int i = 0; i < size;i++){
  scanf("%d",& ptr[i]);
}

 }
           // display  code 
   void  displayArry(int* ptr,int size){// function definetion 
    printf("[");
    for(int i = 0; i < size ; i++)
      printf("%d",ptr[i]);
      printf("]");
      
     
    }
  int serachinArry(int* ptr,int size, int no){// fuction decleraion
    for(int i=0;i<size;i++)
      if(ptr[i]==no)
      {
        return i;
      } return-1;
    }
  
