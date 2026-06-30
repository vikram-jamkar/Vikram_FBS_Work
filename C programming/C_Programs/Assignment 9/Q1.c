// 1.write a program to cheak  whether  even and  odd number...
int evenodd(int no);
#include<stdio.h>
int main (){
             int no;
    
            printf("Enter the number\n");
            scanf("%d",&no);

           if ( evenodd(no))
           {
             printf("even number");
           }
            else{printf("odd number");}

           
}

int evenodd(int no){
    if(no%2==0)
            {
               return 1;
                        
            }else{

                return 0;
            }
}
        