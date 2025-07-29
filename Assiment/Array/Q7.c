#include <stdio.h>
/*7.Remove all occurrences of a given number in an array.
Input: {1, 2, 2, 3, 4, 2, 5}, Remove: 2
Output: {1, 3, 4, 5}*/
void main (){
    int arry [] = {1,2,2,3,4,2,5};
    int n = 7;
    int remove = 2;
    int i,j = 0;
     int newArry[7];

     for (i = 0; i < n; i++)
     {
        if(arry[i] !=remove){
            newArry[j] = arry[i];
            j++;
        }
     }printf("arry afther reomving %d\n",remove);
      for(i = 0; i < j;i++){
        printf("%d",newArry[i]);
      }
}

