#include <stdio.h>
//Q8. Merge two arrays

void main () {
    int arr[3]= {1,2,3};
    int brr[3] = {4,5,6};
    int crr [6];
    int i=0;
    


       for (int j = 0; j < 3; j++){
                
                 crr[i] = arr[j];
                 i++;
                }

            
                for (int j = 0; j <3;j++){
                           crr[i] = brr[j];
                     i++;
                }
               printf("marge array");     
       for (int i = 0; i < 6; i++){
         printf("%d",crr[i]);
       }
    
    }