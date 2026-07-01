// 2 Write a program to cheak pallindrom  or not ...
 void   ispallindrom(int* no);
#include<stdio.h>
void main(){
    int no;
   

 printf("Enter the number\n");
 scanf("%d",&no);
    ispallindrom(&no);
}
         void   ispallindrom(int* no){
   int n1,n2,n3,res;

    int temp =*no;
     n1 = temp%10;
     temp = temp/10;
     n2 = temp%10;
     temp = temp/10;
     n3 = temp%10;
 res = n1 *100 + n2 * 10 + n3;

 if(res==*no){
    printf("number is pallidrome");
 }else{
    printf("not pallindrome");
 
            }}