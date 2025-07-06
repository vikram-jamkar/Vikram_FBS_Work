#include <stdio.h>

void main() {
    int a, b, c;

    // 3 number input lena
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Sabse bada number find karna
    if (a >= b && a >= c) {
        printf("Greatest number is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Greatest number is: %d\n", b);
    } else {
        printf("Greatest number is: %d\n", c);
    }
}

