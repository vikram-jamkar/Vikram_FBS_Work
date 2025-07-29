#include <stdio.h>
/*6.Left rotate an array by one position.
Input: {10, 20, 30, 40, 50}
Output: {20, 30, 40, 50, 10}*/
void main (){

    int arry []  = {10,20,30,40,50}; 
    int n =5;
    int i;
    int temp;


        temp =  arry[0];
       for(i = 0; i < n -1;i++){
        arry[i] = arry[i+1]; 
    }
        arry[n-1] = temp;

    printf("Left Rotated Array: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d",arry[i]);
    }
    


}