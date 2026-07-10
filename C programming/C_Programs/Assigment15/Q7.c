#include <stdio.h>

struct Distance
{
    int feet;
    int inch;
};

int main()
{
    struct Distance d1;

    printf("Enter feet: ");
    scanf("%d", &d1.feet);

    printf("Enter inch: ");
    scanf("%d", &d1.inch);

    printf("Distance: %d feet %d inch", d1.feet, d1.inch);

    return 0;
}