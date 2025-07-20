#include <stdio.h>
//1 cerete arry 
//2 scan 
//3 display
//4 find max 
//5 reverse

void main (){
    // 1 create arry
    int arr [10];
     int i ;
      printf("enter the element ");
    // 2 scan the user 
    for ( i = 0; i<10; i++){
      scanf("%d",&arr[i]);
    }
      // display 
      for ( i = 0; i < 10; i++)
      printf("%d",arr[i]);
      // max number
      int max = arr [0];
      int min = arr [0];

      for(i = 0; i<10;i++){
        if(arr[i]>max){
             max =  arr[i];
            }
              printf("max element in arr is := %d",max);
        
       
      }

     

}
     
    


    



    




