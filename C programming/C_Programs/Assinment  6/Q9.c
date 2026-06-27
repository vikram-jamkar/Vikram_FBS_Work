//3. Write a program to find greatest of three numbers using nested if-else.
 void greatestnum();//funtion defination
#include<stdio.h>
void main(){

     greatestnum();//funtion call
           
            
            
}

 void greatestnum(){//funtion decleretion
    int a,b,c;

            printf("Enter the number");
            scanf("%d%d%d",&a,&b,&c);

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