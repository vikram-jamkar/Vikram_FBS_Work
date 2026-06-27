// 1.write a program to cheak  whether  even and  odd number...
void evenodd();
#include<stdio.h>
int main (){
          
    evenodd();
}

   void evenodd(){
            int no;
    
            printf("Enter the number\n");
            scanf("%d",&no);

            if(no%2==0)
            {
                printf("number is even");
                        
            }else{

                printf("number is odd");
            }
        }