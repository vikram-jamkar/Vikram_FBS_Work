#include <stdio.h>
//1. Print armstrong numbers in the given range 1 to n.
void main (){
    int n, i, j;

    printf("Enter the number");
    scanf("%d",&n);
//outer loop
for(i = 1;i < n;i++){

    int temp = i, digit = 0, sum = 0;

 for ( j = temp;j > 0; j = j/10)
         

 digit++;

 //calculet amstrong
 
 for(j=temp;j>0; j=j/10){

    int rem = j % 10;
    int p = 1,k;
    for(k = 1; k <= digit; k++)
    {
       p = p * rem;
    }
    sum = sum + p;
    
 }if(sum == i)
            printf("%d ", i);

}
 
 
    
}