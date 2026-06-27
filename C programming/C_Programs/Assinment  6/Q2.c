// 2 Write a program to cheak pallindrom  or not ...
void pallindrom(); //funtion decleretion 
#include<stdio.h>
void main(){
 pallindrom();//funtion call

}

   void pallindrom(){//funtion declerection
     int no,n1,n2,n3,res;
   

 printf("Enter the number\n");
 scanf("%d",&no);
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

