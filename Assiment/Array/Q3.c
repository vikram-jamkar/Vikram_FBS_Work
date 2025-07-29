#include <stdio.h>
/*3.Count the frequency of each element in an array.
Input: {1, 2, 2, 3, 3, 3, 4}
Output: 1 → 1 time, 2 → 2 times, 3 → 3 times, 4 → 1 time*/

void main (){
    int arry [] = {1,2,2,3,3,3,4,};
    int i,j;
    int len = 7;
   int couunt = 0;
 for (i = 0; i < len ;i++){
    couunt = 0;
 

   for ( j = 0; j < len; j++)
   {
      if (arry[j]== arry[i]){

        couunt++;
      }
         
   } printf("arry[%d] = %d - %d\n", i ,arry[i],couunt);
}
    
}





