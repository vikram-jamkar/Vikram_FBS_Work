#include <stdio.h>
/*Q write a program to accept arry and axchange  the data of xth posion to y posion 
xth posion = 3
yth posion = 5;
o\p 11 22 31 4 30 45 50*/
void main (){
    int arry [] = {11,23,30,4,21,45,50};
int x = 3 ;
int y = 5;
int temp;

temp = arry[x-1];
  arry[x - 1] = arry[y - 1];
arry[y-1] = temp;

printf("arry after exchane ");
 for (int i = 0; i < 7; i++) {
    printf("%d ", arry[i]);
 }

}
