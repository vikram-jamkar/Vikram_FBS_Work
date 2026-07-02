/*sort the arry*/
 void storearry(int * ptr, int size);//funtion defination
 void  dispalyarr(int*ptr,int size);//funtion defination
#include<stdio.h>
void main(){
    int arr[10] ,temp;

    printf("eneter the element");

    storearry(arr ,10);//funtion call
    dispalyarr(arr,10);// funtion call
    

    for(int i = 0; i < 10 ; i++){
        
        for (int j = 0; j < 10-1-i; j++)
        {
              if (arr[j] > arr[j+1] )
              {
                         temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                        

              }
              
        }
        
    }printf("Sorted array:\n");

 dispalyarr(arr,10);// funtion call


    
    
}


void storearry(int* ptr, int size){//funtion decleretion
for (int i = 0; i < size; i++)
    {
        scanf("%d",&ptr[i]);
    }
}

void  dispalyarr(int*ptr,int size){//funtion decleretion 
for (int i = 0; i <size; i++)
    {
        printf("%d",ptr[i]);
    }
 }


