//3. Write a program to find greatest of three numbers using nested if-else.
int greatest(int a, int b ,int c);
#include<stdio.h>
void main(){ 
             int a,b,c;

             printf("Enter the number");
             scanf("%d%d%d",&a,&b,&c);
            int res =greatest(a,b,c);
            if (res==1)
            {
             printf("a is greter");
            
            }else if(res == 2){
                printf("b is greter");
            }else{printf("c is grether");}
            
            
                
}


 int greatest(int a, int b ,int c){
   
             if (a>b)
             {
             if(a>c)
             {
             return 1;
             }else
             {
             return 2;
             }
             }
             else if (b>c)
             {
             return 3;
             }else
             {
             return 4;
             }}