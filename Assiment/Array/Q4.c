#include <stdio.h>
/*4.Insert an element at a specific position in an array.
Input: {10, 20, 30, 40, 50}, Position: 3, Value: 25
Output: {10, 20, 25, 30, 40, 50}*/
void main (){
    int arry [] = {10,20,30,40,50};
    int n = 6;    
    int pos = 2; //25 ko 30 ki jaga pe print karna he 
    int valu = 25;
    int i;

     
for(i = 4; i >= pos;i--){
    arry[i + 1] = arry[i];}
    arry[pos]= valu;
      for ( i = 0; i < n; i++){
       printf("%d",arry[i]);}
      
      






}
