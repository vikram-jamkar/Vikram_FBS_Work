
#include<stdio.h>
//Q1.Merge two sorted arrays into a single sorted array.
//Input: {1, 3, 5} and {2, 4, 6}
//Output: {1, 2, 3, 4, 5, 6}
void main (){
    int arry1 [3] = {1,3,5};
    int arry2 [3] = {2,4,6};
    int marge[6];
    int i = 0;
    int j = 0;
    int k = 0 ; 

     while (i < 3 && j < 3)
     {
           if ( arry1[i] < arry2[j] )
           {
                     marge[k]= arry1[i];

                   i++;     
                    
           }else{

                   marge[k] = arry2[j];
                   j++;
           } k++;}
           while(i < 3){
                marge[k] = arry1[i];
                 i++;
                 k++;
           }
     while (j < 3) {
        marge[k] = arry2[j];   
        j++;
        k++;
    }
    printf("Merged Sorted Array: ");
 for ( k = 0; k < 6; k++)
{
      printf("%d",marge[k]);
}
}