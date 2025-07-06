#include <stdio.h>

void main() {
    char ch;

    // User input
    printf("Enter the value: ");
    scanf(" %c", &ch);  // space before %c to avoid newline issue

    // Check letter or symbol
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Vowel check
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("It is a Vowel.\n");
        } else {
            printf("It is a Consonant.\n");
        }
    } else {
        printf("It is a Symbol.\n");
    }
}
