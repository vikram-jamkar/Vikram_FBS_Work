/*2 Print table for given number.
Input: n = 5
Output: 5 10 15 20 25 30 35 40 45 50*/
void   tbale(int* n ,int* i);

#include<stdio.h>
void main(){

            int n =5;
             int i=1;
             tbale(&n ,&i);

          
            
}

             void   tbale(int* n ,int* i){
                while (*i<=10)
            {
              printf("%d ",*n *  *i);
              (*i)++;
            }
               }