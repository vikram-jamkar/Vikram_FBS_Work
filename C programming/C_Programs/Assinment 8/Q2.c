// 2 Write a program to cheak pallindrom  or not ...
void palidrom(int no);
#include<stdio.h>
void main(){
    int no;
   

  printf("Enter the number\n");
  scanf("%d",&no);
  palidrom(no); //funtion call

}

void palidrom(int no){
    int r1,r2,r3,n1,n2,n3,res;
    int temp = no;
     n1 = temp%10;
     temp = temp/10;
     n2 = temp%10;
     temp = temp/10;
     n3 = temp%10;
 res = n1 *100 + n2 * 10 + n3;

 if(res==no){
    printf("number is pallidrome");
 }else{
    printf("not pallindrome");
 }
}