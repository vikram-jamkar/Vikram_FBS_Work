#include <stdio.h>
void main(){
    int num = 121;
    int r1,r2,r3,total,revers;
    int q1 ,q2 ;
    r1 = num % 10;
    q1= num / 10;
    r2 =q1 % 10;
    q2 = q1 / 10;
    r3 = q2 % 10;

total = r1 + r2 + r3;
revers = r1*100+r2*10+r3;
    printf("%d %d %d",total,revers, num);
    if (revers == num){
        printf("This is pallindrome");

    }else{
        printf("not pallindrome");
    }
}