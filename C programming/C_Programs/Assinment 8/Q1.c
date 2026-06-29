// 1.write a program to cheak  whether  even and  odd number...
void evenodd(int);//funtion defination
#include<stdio.h>
int main (){
             int no;
    
            printf("Enter the number\n");
            scanf("%d",&no);
            evenodd(no);//funtion call
            
        
}//end main


void evenodd(int no){//funtion decleretion
            if(no%2==0)
            {
                printf("number is even");
                        
            }else{

                printf("number is odd");
            }}