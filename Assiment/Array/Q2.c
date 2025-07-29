#include <stdio.h>

void main() {
    int arr[] = {1, 2, 3, 3 ,4, 5, 1};   // Array diya gaya
    int n = 7; 
    int i , j;
    int count = 0 ;

    printf("duplicate element");



    for( i = 0; i < n; i++){
             
        for (j = i + 1; j < n ; j++)
        {    
            if (arr[i] == arr[j]){
                count++;
                printf("%d ", arr[i]);
           // int k,   isprinted = 0;


            /*for (k = 0; k < i; k++) {  // pehle ke elements check karo
                 if (arr[k] == arr[i])
                    {
              isprinted = 1;  // pehle hi print ho chuka
                        break;
                    }
                 }
                    
                    if (isprinted == 0) {   // agar pehle nahi print kiya
                    printf("%d ", arr[i]);  // to ab print karo
                }
                break;*/

                }
            }

    }
}
    
    
    
    

 