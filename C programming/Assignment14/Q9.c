#include <stdio.h>
//9. Complex (real, imaginary)
   typedef  struct
    complex
{
    int real,img;

}complex;
void dispaly( complex );
 complex addcomplex(complex c1,complex c2);
void main (){
    complex c1, c2, c3;
       c1.real = 10;
       c1.img = 5;
       c2.real= 10;
       c2.img = 34;
      dispaly(c1);
        dispaly(c2);
           

        c3 = addcomplex(c1,c2);
          dispaly(c3);
}

void dispaly( complex temp){
    printf("%d + %di ",temp.real,temp.img);
}

    complex addcomplex( complex c1, complex c2){
          
           complex c3;
            c3.real = c1.real +c2.real; 
             c3.img = c1.img + c2.img;
             return c3;
            
            }