#include <stdio.h>
//Q1 1. Find minimum and maximum number in array 

void main (){
    int arry [5] = {40,10,30,50,20};
    int i;
    int max = arry[0];//sabse badi valu
    int main = arry [0];//sabse chota number 


    for (i = 1; i < 5;i++ ){
        
    if (arry[i] > max){
               max = arry[i];
    }
       if (arry[i]< main){
                   main = arry[i];
       }
               
    }
    
    printf("Maximum number is: %d\n",max);
    printf("minimum  number is: %d\n",main);
}