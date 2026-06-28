// 2 Write a program to cheak pallindrom  or not ...
int isprime();
#include<stdio.h>
void main(){
 //funtion call
 if (isprime())
{
   printf("number is pallindrom");
}else{
 printf("number is not palindorm");
}
}//end main




int isprime(){
     //funtion decleretion
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
    return 1;

 }else{
   return 0;

 }

}

