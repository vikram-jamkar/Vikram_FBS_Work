#include <stdio.h>

/*Q7. Take two array and add sum in third array
Example-
arr[5]= {1,2, 3, 4,5}

brr[5]={10,20,30, 40, 50}
crr[5]={11,22,33,44,55}*/
   
void main (){
    int arr [5] = {1,2,3,4,5};
    int brr [5] = {10,20,30,40,50}; //create array
    int crr [5];

//logic 

for ( int i = 0; i<5 ;i ++){
     crr[i]  =  arr[i] + brr[i];
}    
    // sum to arry
    printf(" sum to array arr and brr sum crr=\n");

    //display reault
     for(int i = 0; i < 5;i++)
     printf("%d",crr[i]);

}