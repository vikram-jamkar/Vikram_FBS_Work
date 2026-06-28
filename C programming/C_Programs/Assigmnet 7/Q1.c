// 1.write a program to cheak  whether  even and  odd number...
int evenodd();//funtion defination
#include<stdio.h>
int main (){
            
   if (evenodd())//funtion call
   {
    printf("number is even");
   }else{printf("number is odd");}
    


}//funtion end


 int evenodd(){
    int no;
    
             printf("Enter the number\n");
             scanf("%d",&no);

             if(no%2==0)
             {
               return 1;

                        
             }else{

                return 0;

            }
}

