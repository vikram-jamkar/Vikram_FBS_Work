#include <stdio.h>
/*5. Print an inverted pyramid pattern
Input: n = 5
Output:

*****
****
***
**
*/
void main (){
    int n = 5;
    
    for(int i = n;i>=1;i--){
        
        for(int sapce = n-1; sapce >= 1;sapce--){
            printf(" ");
        }
        for(int star = 1;star <=(2*i-1);star++){
            printf("*");
        }printf("\n");
    } 
}