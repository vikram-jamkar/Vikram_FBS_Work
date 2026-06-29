//3. Write a program to find greatest of three numbers using nested if-else.
void greatest(int a,int b,int c);
#include<stdio.h>
void main(){
            int a,b,c;

            printf("Enter the number");
            scanf("%d%d%d",&a,&b,&c);
               greatest(a,b,c);
           
}
void greatest(int a,int b,int c){
     if (a>b)
            {
              if(a>c)
              {
                printf("a is gerether ");
              }else
              {
                printf("c is grether");
              }
            }
            else if (b>c)
            {
                printf("b is greater");
            }else
            {
                printf("c is grether");
            }
     

 }