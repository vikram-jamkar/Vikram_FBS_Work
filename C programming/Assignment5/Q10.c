#include <stdio.h>
/*10. Print a hollow square with diagonal pattern
Input: n = 5
Output:

* * * * *
*  *    *
*    *  *
*     * *
* * * * */


int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {        // Rows
        for (int j = 1; j <= n; j++) {    // Columns
            if (i == n || i == 1 || j == n || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("  "); // 2 spaces for alignment
            }
        }
        printf("\n");
    }

    return 0;
}


