#include <stdio.h>
/*7. Print a Floyd’s triangle pattern
Input: n = 4
Output:
1
2 3
4 5 6
7 8 9 10*/
void main (){
   int count = 1;

   for(int i =0; i <= 4;i++){
    
    for (int j = 1; j <= i; j++)
    {
       printf("%d", count);

       count++;
    }
    printf(" \n");
   }
}