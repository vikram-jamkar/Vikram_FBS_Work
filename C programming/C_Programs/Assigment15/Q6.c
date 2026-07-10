//6. Time (hour, min, sec)

#include <stdio.h>

struct Time
{
    int hour;
    int min;
    int sec;
};

int main()
{
    struct Time t1;

    printf("Enter hour: ");
    scanf("%d", &t1.hour);

    printf("Enter minute: ");
    scanf("%d", &t1.min);

    printf("Enter second: ");
    scanf("%d", &t1.sec);

    printf("%02d:%02d:%02d",t1.hour,t1.min,t1.sec);
}