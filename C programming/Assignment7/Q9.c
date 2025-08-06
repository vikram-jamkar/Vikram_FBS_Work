#include <stdio.h>
//Q9. Reverse the given array.
void main (){
    
    int arr[5] = {10,20,30,40,50};
    int i,temp;
    int start = 0;
    int end =  4;

    while(start < end ){

                    temp = arr[start];
                     arr [start]=arr[end];
                       arr[end] = temp;

                       start++;
                       end--;
    }
                 printf("reverse array");
                 for(int i = 0; i<5;i ++){
                 printf("%d",arr[i]);}
}