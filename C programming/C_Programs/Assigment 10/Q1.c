void  swap(int* a, int* b );
#include<stdio.h>
void main(){
            int a  =10; int b = 20; 

            printf("%d%d",a ,b);
            swap(&a ,&b);//funtion call

            printf("%d%d",a,b);
}

     void  swap(int* a, int* b ){
        int c;
       

        c = *a;
       *a = *b;
        *b = c;

     }