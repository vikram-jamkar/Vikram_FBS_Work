#include <stdio.h>
//Q4 Find the odd and even among the number 
void main (){
    int arry[5]={40,10,35,23,50};
     int i;
     for (i=0;i<5;i++){
        if(arry[i]%2==0){
            printf("even : = %d\n",arry[i]);
        }else{
            printf("is odd :=%d\n",arry[i]);
        }

     }

}