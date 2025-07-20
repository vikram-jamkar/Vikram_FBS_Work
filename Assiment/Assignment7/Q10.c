#include <stdio.h>
//Q10 sort in srrsy assending number
void main (){
    int arr [5] = { 40, 10 ,50 ,30,20};
    int temp; // swap ke liye 


   //yeh 2 loop ke sorting ke leye 

    for(int i = 0; i < 5-1;i++){// outher loop kitni baar chalega

        for(int j=0;j<5-1-i;j++){// inner loop her number ko copmpere 
            

            if (arr[j]> arr[j+1]){
                    
                     /* 40 */  temp  = arr[j];//0
                     /*10*/   arr[j]   = arr[j+1];//0
                          /*40*/  arr[j+1]  = temp;//0
            }
        }
    }
    printf("sort arry in assending order");
    for(int i = 0; i < 5;i++){
        printf("%d",arr[i]);
    }

}