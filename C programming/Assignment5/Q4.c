#include <stdio.h>
/*4. pyramid pattern
Input: n = 5
Output:
*
**
***
****
******/
void main(){
    int n = 5;
    for(int i = 1; i <= n;i++){

        for(int sapce = 1; sapce <=n;sapce++){
            printf(" ");
        }
        for(int star = 1;star <= (2 * i-1);star++){
            printf("*");
        }printf("\n");
    }

}

